// 13_PolymorphismTask.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Human.h"
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
	unsigned int teacherWorkTime = 40;
	Teacher* tch = new Teacher("Dimitry", "Sergeevich", "Sergeev", teacherWorkTime);
	std::vector<Human*> humans;
	humans.push_back(stud);
	humans.push_back(tch);
	for (int i = 0; i < humans.size(); i++) {
		std::cout << humans[i]->getFullName() << std::endl;
		std::cout << humans[i]->getInfo() << std::endl;
	}

	return 0;
}