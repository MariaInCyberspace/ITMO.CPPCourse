// 12_SchoolCpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include <vector>

int main()
{
	std::vector<int> scores;
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	Student* stud = new Student("Peter", "J", "McCallister", scores);
	std::cout << stud->getFullName() << std::endl;
	std::cout << "\tThe average score is " << stud->getAverageScore() << std::endl;

	unsigned int teacherWorkTime = 40;
	Teacher* tch = new Teacher("Dimitry", "Sergeevich", "Sergeev", teacherWorkTime);
	
	std::cout << tch->getFullName() << std::endl;
	std::cout << "\tThe amount of work hours: " << tch->getWorkTime() << std::endl;
	return 0;
}
