// ReadWrite_practice.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
using namespace std;

double sumUp(double* arr, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
        cout << arr[i] << ' ';
    }
    return sum;
}

void fillArrayWithRandomNumbers(double* arr, const int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % 100);
    }
}

int ex1() {
    double sum = 0;
    int const n = 100;
    double nums[n];
    fillArrayWithRandomNumbers(nums, n);

    ofstream out("test", ios::out | ios::binary);
    if (!out) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }

    out.write((char*)nums, sizeof(nums));
    out.close();

    ifstream in("test", ios::in | ios::binary);
    if (!in) {
        cout << "Файл открыть невозможно";
        return 1;
    }

    in.read((char*)&nums, sizeof(nums));

    int k = sizeof(nums) / sizeof(double);
    sum = sumUp(nums, k);
    cout << "\nsum = " << sum << endl;

    in.close();

}

int main() {
    ex1();
}
