// Project_SortingArrays.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void sortArrayAsc(int* a, int N) {
    int min = 0, buf = 0;
    for (int i = 0; i < N; i++) {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением
        // в цикле найдем реальный номер ячейки с минимальным значением
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        // перестановка этого элемента, поменяв его местами с текущим
        if (i != min) {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
}


void fillArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

void ex2() {
    const int N = 10;
    int arr[N];
    fillArray(arr, N);
    sortArrayAsc(arr, N);
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    ex2();
}

