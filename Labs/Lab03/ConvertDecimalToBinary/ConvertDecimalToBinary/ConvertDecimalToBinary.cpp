// ConvertDecimalToBinary.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

std::vector<int> getBinaryRepresentation(int num, std::vector<int> binary) {
    int remainder;
    while (num > 2) {
        remainder = num % 2;
        binary.push_back(remainder);            
        return getBinaryRepresentation(num / 2, binary);   
    }
    if (num == 2) {
        binary.push_back(0);
        remainder = 1;
        binary.push_back(remainder);
    } 
    if (num == 1) {
        binary.push_back(1);
    }
    return binary;
}

std::vector<int> getBinaryRepresentation(int num) {
    std::vector<int> binary;
    return getBinaryRepresentation(num, binary);
}

long convertToBinary(std::vector<int> binary) {
    long b = 0;
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
    inBinary = convertToBinary(getBinaryRepresentation(input));
    std::cout << input << " in binary is '" << inBinary << "'\n";
}

