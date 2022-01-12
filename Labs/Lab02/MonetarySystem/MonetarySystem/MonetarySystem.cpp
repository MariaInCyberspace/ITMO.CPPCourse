// MonetarySystem.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


void findChange(double N) {
	N = std::ceil(N * 100.0) / 100.0; // Round to two decimal places
	double initialN = N; // Save the initial value to display later
	N *= 100; // To make working with kopeks easier
	int oneKop = 0, fiveKop = 0, tenKop = 0, fiftyKop = 0;
	int ones = 0, twos = 0, fives = 0, tens = 0, twentyfives = 0;

	while (N > 0) {		

		if (N >= 2500) {
			N -= 2500;
			twentyfives++;
		}
		else if (N >= 1000) {
			N -= 1000;
			tens++;
		}
		else if (N >= 500) {
			N -= 500;
			fives++;
		}
		else if (N >= 200) {
			N -= 200;
			twos++;
		}
		else if (N >= 100) {
			N -= 100;
			ones++;
		}
		else if (N <= 100) {
			
			if (N >= 50) {
				N -= 50;
				fiftyKop++;
			}
			else if (N >= 10) {
				N -= 10;
				tenKop++;
			}
			else if (N >= 5) {
				N -= 5;
				fiveKop++;
			}
			else if (N >= 1) {
				N -= 1;
				oneKop++;
			}
		}
	}
	std::cout << initialN << " is '" << twentyfives << "' 25-rouble coins , \n'" << tens << "' 10-rouble coins, \n'" << fives << "' 5-rouble coins, \n'"
		<< twos << "' 2-rouble coins, \n'" << ones << "' 1-rouble coins, \n'" << fiftyKop << "' 50-kopek coins, \n'" << tenKop << "' 10-kopek coins, \n'"
		<< fiveKop << "' 5-kopek coins, \n'" << oneKop << "' 1-kopek coins.\n";
}


int main()
{
	std::cout << "Input sum:\n";
	double sum;
	std::cin >> sum;
	findChange(sum);
}


