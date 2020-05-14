// This program has three recursive functinos, from Homework 7.
// The first function prints a counting down til it hits 0.
// The second function calculates the sum of an arrya.
// The third function prints an array in the reverse order.

// Course:			CIS2542-001
// Student:			Klead Fusha
// Instructor:		Michael Henson
// Assignment 7:	Recursion

#include <iostream>
using namespace std;



void parking(int n)
{
	if (n > 0)
	{
		cout << "No parking space available. " << n << " minutes of wait!" << endl;
		parking(n - 1);
	}
	else
		cout << "********** You can park!!! **********";
}


int arraySum(int a[], int b)
{
	if (b > 0)
	{
		return arraySum(a, b - 1) + a[b - 1];
	}
	else
		return 0;
}



void displayReverse(char list[], int size)
{
	if (size <= 0)
		cout << "Done!!!";
	else
	{
		cout << list[size - 1] << ", ";
		displayReverse(list, size - 1);
	}
}


int main()
{
	
	int a[] = { 1, 2, 3, 4, 5, 6 };
	int b = sizeof(a) / sizeof(int);


	cout << "The sum of the array is:  " << arraySum(a, b) << endl << endl;
		
	//******************************************//

	cout << "********** Parking car test **********" << endl;
	parking(7);
	cout << endl << endl;


	//******************************************//
	
		char list[] = { 'A', 'B','C', 'D', 'E', 'F' };
	int size = sizeof(list) / sizeof(char);

	cout << "Printing the array in the reverse order: ";
	displayReverse(list, size);

	cout << endl << endl;

	//******************************************//
	
	cout << endl;
	system("pause");
	return 0;
}
