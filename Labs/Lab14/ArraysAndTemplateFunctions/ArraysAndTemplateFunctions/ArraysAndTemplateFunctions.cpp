// ArraysAndTemplateFunctions.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

template<class Tuple>
void printTupleOfThree(Tuple t);

template<class T>
void sorting(T arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        T x = arr[i];
        for (j = i - 1; j >= 0 && x < arr[j]; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = x;
    }
}

template<class T>
void display(T arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << ";";
    cout << endl;
}

void ex1() {
    int arr[] = { 9,3,17,6,5,4,31,2,12 };
    double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
    char arrc[] = "Hello, word";
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrd) / sizeof(arrd[0]);
    int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
    sorting(arr, k1);
    sorting(arrd, k2);
    sorting(arrc, k3);

    display(arr, k1);
    display(arrd, k2);
    display(arrc, k3);
}

void ex2() {
    vector<string> v1{ "one", "two", "three", "four", "five", "six" };
    vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
    vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    auto t0 = make_tuple(v1[0], v2[0], v3[0]);

    printTupleOfThree(t0);

}

template<class Tuple>
void printTupleOfThree(Tuple t)
{
    cout << "("
        << std::get<0>(t) << ", "
        << std::get<1>(t) << ", "
        << std::get<2>(t) << ")" << endl;   
}


int main()
{
    ex2();
}

