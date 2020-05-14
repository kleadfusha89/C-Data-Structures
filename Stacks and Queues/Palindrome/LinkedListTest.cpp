// This program will test if a string is a palindrome or not.
// We're going to add a string to the stack, and then we're going to pop the values in the stack,
// and each value we pop will be stored into a new variable, which will be the reversed string.
// If they match we have a palindrome.

// Course:			CIS2542-001
// Student:			Klead Fusha
// Instructor:		Michael Henson
// Assignment 6a:	Palindromes

#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Stack<char> charStack;


	string testString;
	string reverse;

	cout << "Enter string to test if palindrome: ";
	getline(cin, testString);
	

	unsigned int i = 0;
	while(i < testString.length())
	{
		charStack.push(testString[i]);
		i++;

	}

	unsigned j = 0;
	while (j < testString.length())
	{
		reverse += charStack.pop();
		j++;

	}

	cout << endl;
	cout << "The string you entered is:    " << testString << endl;
	cout << "It's reverse is:              " << reverse << endl << endl;




	if (testString == reverse)
		cout << "The string " << testString << " is a palindrome!!!" << endl;
	else
		cout << "The string " << testString << " is not a palindrome!!!" << endl;





	

	// keep this stuff at the end of main
	cout << endl;
	system("pause");
	return 0;
}
