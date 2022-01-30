// ArrayTemplateClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

template<class T, class T1> class arr {
public:
    arr(int size);
    ~arr() { delete data; cout << "destructor\n"; }
    T1 sum();
    T averageValue();
    void showArray();
    int addValue(T value);
private:
    T* data;
    int size;
    int index;
};

template<class T, class T1>
arr<T, T1>::arr(int size)
{
    data = new T[size];
    if (data == NULL)
    {
        cerr << "Error memory ---- exit program" << endl;
        exit(1);
    }
    arr::size = size;
    arr::index = 0;
}

template<class T, class T1>
T1 arr<T, T1>::sum()
{
    T1 sum = 0;
    for (int i = 0; i < index; i++) sum += data[i];
    return(sum);
}

template<class T, class T1>
T arr<T, T1>::averageValue()
{
    T1 sum = 0;
    for (int i = 0; i < index; i++) sum += data[i];
    return (sum / index);
}

template<class T, class T1>
void arr<T, T1>::showArray()
{
    for (int i = 0; i < index; i++) cout << data[i] << ' ';
    cout << endl;
}

template<class T, class T1>
int arr<T, T1>::addValue(T value)
{
    if (index == size)
        return(-1);
    else
    {
        data[index] = value;
        index++;
        return(0);
    }
}

int main()
{
    arr<int, long> numbers(100);
    arr<float, float> values(200);
    int i;
    for (i = 0; i < 50; i++) numbers.addValue(i);
    numbers.showArray();
    std::cout << "Sum = " << numbers.sum() << std::endl;
    std::cout << "Average = " << numbers.averageValue() << std::endl;
    for (i = 0; i < 100; i++) values.addValue(i * 100);
    values.showArray();
    std::cout << "Sum = " << values.sum() << std::endl;
    std::cout << "Average = " << values.averageValue() << std::endl;
}
