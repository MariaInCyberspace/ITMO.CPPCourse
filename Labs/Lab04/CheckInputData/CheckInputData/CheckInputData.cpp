// CheckInputData.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

bool input(int &a, int &b) {
    std::string aa, bb;
    int count = 0;
    std::cout << "Input a:\n";
    std::cin >> aa;
    std::cout << "Input b:\n";
    std::cin >> bb;
    for (int i = 0; i < aa.length(); i++) {
        if (isdigit(aa[i])) count++;
    }
    if (count == aa.length()) a = stoi(aa);
   
    count = 0;
    for (int i = 0; i < bb.length(); i++) {
        if (isdigit(bb[i])) count++;
    }
    if (count == bb.length()) b = stoi(bb);
    return (isdigit(a) && isdigit(b)) ? true : false;
}

int main()
{
    int a, b;

    if (!input(a, b)) {
        std::cerr << "Something went wrong.\n";
        return 1;
    }
    int s = a + b;
    std::cout << s << "\n";

    return 0;
}
