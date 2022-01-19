// 6_2SaveArraysToFile.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>

int* sortArrayAsc(int* arr, int N) {
    int* a = new int[N];
    for (int i = 0; i < N; i++) {
        a[i] = arr[i];
    }
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
    return a;
}

void fillArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

void arrayToString(int* arr, int n, std::string &s) {
    for (int i = 0; i < n; i++) {
        std::string ss = std::to_string(arr[i]);
        if (i == n - 1) {
            s.append(ss).append(";\n");
        }
        else {
            s.append(ss).append(", ");
        }        
    }
}

int main()
{
    const int N = 10;
    std::string arrStr = "", sortArrStr = "";
    int arr[N];
    fillArray(arr, N);
    int* sorted = sortArrayAsc(arr, N);
    arrayToString(arr, N, arrStr);
    arrayToString(sorted, N, sortArrStr);
    std::fstream out("text.txt", std::ios::out);
    if (!out) {
        std::cout << "Couldn't open file.";
    }
    out.write((char*)&arrStr[0], arrStr.length());
    out.write((char*)&sortArrStr[0], sortArrStr.length());
    out.close();

    std::fstream in("text.txt", std::ios::in);
    if (!in) {
        std::cout << "Couldn't open file.";
    }
    in.read((char*)&arrStr[0], arrStr.length());
    in.read((char*)&sortArrStr[0], sortArrStr.length());
    in.close();
    for (int i = 0; i < arrStr.length(); i++) {
        std::cout << arrStr[i] << "";
    }
    for (int i = 0; i < sortArrStr.length(); i++) {
        std::cout << sortArrStr[i] << "";
    }
}

