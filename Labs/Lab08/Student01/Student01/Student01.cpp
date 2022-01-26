// Student01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "student.h"

int main()
{
    int scores[5];
    std::string fName, lName;
    std::cout << "Input student's first name:\n";
    std::cin >> fName;
    std::cout << "Input student's last name:\n";
    std::cin >> lName;
    std::cout << "Input student's scores:\n";
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int score;
        std::cout << i + 1 << ": ";
        std::cin >> score;
        scores[i] = score;
        sum += score;
    }

    Student student01;
    student01.setFirstName(fName);
    student01.setLastName(lName);
    student01.setAverageScore(sum / 5);
    student01.setScores(scores);

    std::cout << "Student's name is: " << student01.getFirstName() << " " << student01.getLastName()
        << "\nAverage score is: " << student01.getAverageScore() << std::endl;
}
