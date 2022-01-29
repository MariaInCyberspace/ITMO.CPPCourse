// PolymorphismPractice.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
// #include "Item.h"
#include "Audiobook.h"
#include "Paperbook.h"
using namespace std;

int main()
{
    Item* pubarr[100];
    int n = 0;
    char choice;
    do
    {
        cout << "\nPaperbook or audiofile (b / a) ? ";
        cin >> choice;
        if (choice == 'b')
            pubarr[n] = new Paperbook;
        else
            pubarr[n] = new Audiobook;
        pubarr[n++]->getdata();
        cout << "Continue((y / n) ? ";
        cin >> choice;
    } while (choice == 'y');

    for (int j = 0; j < n; j++) 
        pubarr[j]->putdata(); 
    cout << endl;
    return 0;
}
