// Project_FunctionPointer.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void displayArray(int*, const int);
bool from_min(const int, const int);
bool from_max(const int, const int);
void bubbleSort(int arr[], int, bool (*) (int, int));

void bubbleSort(int arr[], int n, bool (*compare) (int a, int b)) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if ((*compare)(arr[j], arr[j + 1]))
                std::swap(arr[j], arr[j + 1]);
        }
    }
}

bool from_min(const int a, const int b) {
    return a > b;
}

bool from_max(const int a, const int b) {
    return a < b;
}

void fillArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

void displayArray(int* arr, const int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
}

void ex3() {
    const int N = 10;
    int choice = 0;
    int arr[N];
    bool (*from_f[2]) (int, int) = { from_min, from_max };
    fillArray(arr, N);
    displayArray(arr, N);
    std::cout << "1. Sort ascending\n2.Sort descending\n";
    std::cin >> choice;
    bubbleSort(arr, N, from_f[choice - 1]);
    /*switch (choice) {
    case 1: bubbleSort(arr, N, from_min);
        break;
    case 2: bubbleSort(arr, N, from_max);
        break;
    default: std::cout << "\rUnknown operation\n";
    }*/
    displayArray(arr, N);
}

int main()
{
    ex3();
}
