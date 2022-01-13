// TargetPractice.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>

struct Point {
public:
	int x;
	int y;
	Point(int x1, int y1) {
		x = x1;
		y = y1;
	}
};

std::string interpretResult(int throwCount, int misses) {
	double result = ((double)(throwCount - misses) / (double)throwCount) * 100.0;
	std::string label = "";
	if (result <= 60) {
		label = "new to this, I suppose? There's room for improvement.";
	}
	else if (result <= 80) {
		label = "very good. Train more and you'll become a real threat!";
	}
	else {
		label = "a sniper, huh? Good to know...";
	}
	return label;
}


std::vector<int> throwDarts(Point p) {
	
	int centre = rand(), x, y;
	centre = 0;
	int zeroes = 0, ones = 0, fives = 0, tens = 0, total = 0;
	x = p.x;
	y = p.y;
	if (x > centre + 3 || x < centre - 3) {
		zeroes++;
	}
	else if (y > centre + 3 || y < centre -3) {
		zeroes++;
	}
	else if (x <= centre + 1 && x >= centre - 1) {
		if (y <= centre + 1 && y >= centre - 1) {
			tens += 10;
		}
		else if (y <= centre + 2 && y >= centre - 2) {
			fives += 5;
		}
		else if (y <= centre + 3 && y >= centre - 3) {
			ones++;
		}
	}
	else if (x <= centre + 2 && x >= centre - 2) {
		if (y <= centre + 1 && y >= centre - 1) {
			tens += 10;
		}
		else if (y <= centre + 2 && y >= centre - 2) {
			fives += 5;
		}
		else if (y <= centre + 3 && y >= centre - 3) {
			ones++;
		}
	}
	else if (x <= centre + 3 && x >= centre - 3) {
		if (y <= centre + 1 && y >= centre - 1) {
			tens += 10;
		}
		else if (y <= centre + 2 && y >= centre - 2) {
			fives += 5;
		}
		else if (y <= centre + 3 && y >= centre - 3) {
			ones++;
		}

	}
	std::vector<int> result { ones + fives + tens, zeroes };
	return result;
}

void startGame() {
	std::cout << "Welcome to this dart throwing game!\nGet ready!\n";
	int total = 0;
	int misses = 0;
	int throwCount = 0;
	while (total < 20) {
		std::cout << "Input x value:\n";
		int x, y;
		std::cin >> x;
		std::cout << "Input y value:\n";
		std::cin >> y;
		Point p(x, y);
		std::vector<int> result = throwDarts(p);
		total += result[0];
		misses += result[1];
		throwCount++;
	}

	std::cout << "You made a total of '" << throwCount << "' throws. You missed '" << misses << 
		"' times.\n\tHere's your result : '" << total << "'\nYou're " << interpretResult(throwCount, misses) << "\n";
}


int main()
{
	startGame();
}
