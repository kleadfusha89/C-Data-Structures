// Program for the Linked List, a continuation of the class version. 
// We're going to ask the user to populate the linkedList or enter a negative number
// to stop entering new values. Then, we're going to ask the user to delete the duplicates,
// from the linkedList, which will basically delete all the values, not only duplicates, and
// after it's done it will add only one unique value equal to the others that were deleted.

// Course:			CIS2542-001
// Student:			Klead Fusha
// Instructor:		Michael Henson
// Assignment 4:	Linked List - Deleting dupplicates



#include "LinkedList.h"
#include <iostream>
using namespace std;

int main()
{
	LinkedList list;

	
	int addNum = 1;

	// Prompting the user to populate the Linklist
	// or enter a negative number to quit.
	while (addNum >= 0)
	{
		cout << "Add another number or negative number to quit: ";
		cin >> addNum;

		if(addNum > 0)
		{
		list.addToEnd(addNum);
		}
	}

	// Printing the final linklist after the values have been added.
	cout << "List before refore removing: ";
	list.display();


	cout << endl;
	cout << endl;

	int checkNum = 1;

	// Prompt the user to enter the value of a duplicate that needs to be deleted
	// or enter a negative number to quit.
	while(checkNum >= 0)
	{

		// Prompt user
		cout << "Enter the duplicate number you want to delete (negative num to exit): ";
		cin >> checkNum;


		// If the value is negative break the loop so it doesn't print anything at all
		if (checkNum < 0)
			break;

	
		bool inList = false;

		// Keep repeating until it finds the value and delete it.
		// Also, change the inList value to true
		while(list.find(checkNum))
		{
			inList = true;
			list.remAll(checkNum);
		}

		// If the value of inList was changed, which means if the previous loop ran at least once,
		// add the number that we deleted completely from the linkList, only once.
		if(inList)
		{
			list.addToEnd(checkNum);
		}


		// If it's not found print message, otherwise display the values in the linkedList.
		if (!list.find(checkNum))
			cout << "Number not found in list" << endl;
		else
		{
		cout << "After removing duplicates: ";
		list.display();
		}
		cout << endl;

	}



	//cout << "Looking for 3" << endl;
	//Node *node = list.find(3);
	//if (node != nullptr) cout << "Found it!" << endl;
	//else cout << "Nope, didn't find it." << endl << endl;

	//	cout << "Looking for 8" << endl;
	//	node = list.find(8);
	//	if (node != nullptr) cout << "Found it!" << endl;
		//else cout << "Nope, didn't find it." << endl << endl;

	//	cout << "Removing from beginning." << endl;
	//list.removeFromBeginning();
	//list.display();
	//cout << endl << endl;

	//	cout << "Removing from end." << endl;
	//list.removeFromEnd();
	//list.display();
	//cout << endl << endl;

	// keep this stuff at the end of main
	cout << endl;
	system("pause");
	return 0;
}