// 15_STL.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <map>

struct StudentGrade {
	std::string name;
	char score;
};

int main()
{
	std::map <std::string, char> scores;
	char command = 'y';
	while (command == 'y')
	{
		StudentGrade student;
		std::string name;
		char score;
		std::cout << "Enter student name: ";
		std::cin >> name;
		student.name = name;
		std::cout << "Enter " << student.name << "'s score: ";
		std::cin >> score;
		student.score = score;
		scores.insert({ student.name, student.score });
		std::cout << "Would you like to continue? ('y' / 'n')" << std::endl;
		std::cin >> command;
	}
	for (auto s = scores.begin(); s != scores.end(); s++)
	{
		std::cout << s->first << ": " << s->second << std::endl;
	}
}

