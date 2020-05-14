#pragma once
#include <iostream>
#include <string>

class Student
{
public:
	std::string id;
	std::string firstName;
	std::string lastName;

	Student(std::string i, std::string f, std::string l)
	{
		id = i;
		firstName = f;
		lastName = l;
	}

	void display()
	{
		std::cout << firstName << " " << lastName << " (" << id << ")";
		std::cout << std::endl;
	}
};