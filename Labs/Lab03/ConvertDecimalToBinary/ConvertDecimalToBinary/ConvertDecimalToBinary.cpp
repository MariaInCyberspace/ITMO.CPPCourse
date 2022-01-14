// ConvertDecimalToBinary.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

void convertToBinary(int num, long& binary, int count = 0) {
    int remainder;
    if (num > 0) {
        remainder = num % 2;
        count++;
        convertToBinary(num / 2, binary, count);
        binary += remainder * pow(10, count - 1);
    }
    else if (num < 0) {
        remainder = num % 2;
        count++;
        convertToBinary(num / 2, binary, count);
        binary += remainder * pow(10, count - 1);
    }
}

long convertToBinary(int num) {
    long binary = 0;
    convertToBinary(num, binary);
    return binary;
}


int main()
{
    int input;
    std::cout << "Input a number, please:\n";
    std::cin >> input;
    long inBinary = convertToBinary(input);
    std::cout << input << " in binary is '" << inBinary << "'\n";
}