// ConvertDecimalToBinary.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

std::vector<int> getBinaryRepresentation(int num, std::vector<int> binary) {
    int remainder;
    while (num > 0) {
        remainder = num % 2;
        binary.push_back(remainder);            
        return getBinaryRepresentation(num / 2, binary);   
    }
    return binary;
}

long convertToBinary(int num) {
    long b = 0;
    std::vector<int> bin;
    std::vector<int> binary = getBinaryRepresentation(num, bin);
    for (int i = binary.size() - 1; i >= 0; i--) {
        b += binary[i] * pow(10, i);
    };
    return b;
}

int main()
{
    int input;
    long inBinary;
    std::cout << "This convertor is only for positive numbers\n";
    std::cout << "Input a number, please:\n";
    std::cin >> input;
    inBinary = convertToBinary(input);
    std::cout << input << " in binary is '" << inBinary << "'\n";
}

