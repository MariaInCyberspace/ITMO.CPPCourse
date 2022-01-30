// 14_TemplateForArrayFunction.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

template<class T>
T averageValue(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (sum / size);
}

int main()
{
    int intArr[]{ 1, 1, 1, 1, 1 };
    double doubleArr[]{ 1.1, 1.1, 1.2, 1.1, 1.1 };
    long longArr[]{ 1, 2, 1, 3, 1 };
    char charArr[] = "brrrrr";

    std::cout << averageValue(intArr, 5) << "\n";
    std::cout << averageValue(doubleArr, 5) << "\n";
    std::cout << averageValue(longArr, 5) << "\n";
    std::cout << averageValue(charArr, sizeof(charArr) / sizeof(charArr[0])) << "\n";
}
