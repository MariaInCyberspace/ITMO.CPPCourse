// ConvertDecimalToBinary.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

void getBinaryRepresentation(int num, std::vector<int> &binary) {
    int remainder;
    if (num > 0) {
        remainder = num % 2;
        getBinaryRepresentation(num / 2, binary);
        binary.push_back(remainder);
    }
    else if (num < 0) {
        remainder = num % 2;
        getBinaryRepresentation(num / 2, binary);
        binary.push_back(remainder);   
    }
}

long convertToBinary(int num) {
    long b = 0;
    std::vector<int> binary;
    getBinaryRepresentation(num, binary);
    for (int i = 0; i < binary.size(); i++) {
        b += binary[i] * pow(10, binary.size() - 1 - i);
    };
    return b;
}


int main()
{
    int input;
    long inBinary;
    std::cout << "Input a number, please:\n";
    std::cin >> input;
    inBinary = convertToBinary(input);
    std::cout << input << " in binary is '" << inBinary << "'\n";

}

