#pragma once
#include <iostream>
#include <string>
using namespace std;

class Call
{
public:
	string phoneNumber;
	string date;
	string time;
	string id;
	string language;

	void display()
	{
		cout << "\t" << id;
		cout << "\t" << phoneNumber;
		cout << "\t" << date << "\t" << time;
		cout << "\t" << language << endl;
	}
};
