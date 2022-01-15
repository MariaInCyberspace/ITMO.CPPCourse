// Project_WorkingWithArrays.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int findMax(int *arr, int n, int &index) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) 
            max = arr[i] < 0 ? arr[i] : max;
        index = arr[i] > max ? i : index;
        max = arr[i] > max ? arr[i] : max;
    }
    return max;
}

int findMin(int* arr, int n, int &index) {
    int min = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0)
            min = arr[i] > 0 ? arr[i] : min;
        index = arr[i] < min ? i : index;
        min = arr[i] < min ? arr[i] : min;
    }
    return min;
}

int multiplyRange(int minIndex, int maxIndex, int *arr) {
    int product = 1;
    if (minIndex < maxIndex) {
        for (int i = minIndex + 1; i < maxIndex; i++) {
            product *= arr[i];
        }
    }
    else if (minIndex > maxIndex) {
        for (int i = maxIndex + 1; i < minIndex; i++) {
            product *= arr[i];
        }
    }
    else {
        return arr[minIndex];
    }
    return product;
}

double calculateAverage(int sum, int n) {
    return sum / n;
}

int sumUp(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int sumUpEvenIndexes(int* arr, int n) {
    int sum = 0;
    for (int i = 1; i < n; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int sumUpOddIndexes(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
    }
    return sum;
}

void ex1() {
    const int n = 10;
    int maxIndex = 0, minIndex = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Input a number:\n" << (i + 1) << ") ";
        std::cin >> arr[i];
    }
    int sum = sumUp(arr, n);
    std::cout << "Here's the sum: " << sum << std::endl;
    int avg = calculateAverage(sum, n);
    std::cout << "Here's the average: " << avg << std::endl;
    int max = findMax(arr, n, maxIndex);
    std::cout << "Here's the max number: " << max << " at '" << maxIndex <<"'" << std::endl;
    int min = findMin(arr, n, minIndex);
    std::cout << "Here's the min number: " << min << " at '" << minIndex << "'" << std::endl;
    int prod = multiplyRange(minIndex, maxIndex, arr);
    std::cout << "Here's the product of numbers between max and min indexes: " << prod << std::endl;
}

int main()
{
    ex1();
}

