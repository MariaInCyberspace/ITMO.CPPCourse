// 6_1_Poem.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("poem.txt");
    if (!fout) {
        cout << "Failed to open file";
    }
    char str[130];
    char read[130];
    cout << "Hope you can rhyme:\n";
    cin.get(str, sizeof(str), '&');
    fout.write(str, sizeof(str) / sizeof(char));
    fout.close();

    ifstream in("poem.txt");
    if (!in) {
        cout << "Failed to open file";
    }
    in.read(read, sizeof(read));
    for (int i = 0; i < sizeof(read); i++) {
        cout << read[i] << "";
    }
    in.close();
}
