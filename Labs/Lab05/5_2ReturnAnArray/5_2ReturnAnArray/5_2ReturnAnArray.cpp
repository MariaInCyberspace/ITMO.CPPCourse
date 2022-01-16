// 5_2ReturnAnArray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int* getMaxNumbers(int, int*, int*);

int* getMaxNumbers(int size, int* a, int* b) {
    int* result = new int[size];
    for (int i = 0; i < size; i++) {
        result[i] = a[i] > b[i] ? a[i] : b[i];
    }
    return result;
}

void testFunc() {
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    int s = sizeof(a) / sizeof(int);
    int* c = getMaxNumbers(s, a, b);
    for (int i = 0; i < s; i++) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;
    delete[] c;
}

int main()
{
    testFunc();
}
