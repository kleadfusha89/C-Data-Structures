#include <iostream>
#include "BinaryTree.h"
using namespace std;

void main()
{
	BinaryTree tree;
	int choice = 0;
	const int QUIT = 6;
	string id, fName, lName;
	Student *s = 0;




	do
	{
		cout << endl << "MENU:" << endl;
		cout << "1.  Is tree empty?" << endl;
		cout << "2.  Add student." << endl;
		cout << "3.  Is student present?" << endl;
		cout << "4.  Retrieve student data." << endl;
		cout << "5.  Display all students." << endl;
		cout << "6.  End program." << endl << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			if (tree.isEmpty())
				cout << "Tree is empty." << endl;
			else
				cout << "Tree contains data." << endl;
			break;
		case 2:
			cout << "Student ID:  ";
			cin >> id;
			cout << "First Name:  ";
			cin >> fName;
			cout << "Last Name:  ";
			cin >> lName;
			tree.add(new Student(id, fName, lName));
			break;
		case 3:
			cout << "Enter ID of student:  ";
			cin >> id;
			if (tree.contains(id))
				cout << "Yes, student " << id << " is present." << endl;
			else
				cout << "No, student " << id << " is absent." << endl;
			break;
		case 4:
			cout << "Enter ID of student:  ";
			cin >> id;
			s = tree.search(id);
			if (s == 0)
				cout << "Student " << id << " was not found." << endl;
			else
				s->display();
			break;
		case 5:
			cout << endl << "Preorder Display:" << endl;
			tree.displayPreOrder();
			cout << endl << "Inorder Display:" << endl;
			tree.displayInOrder();
			cout << endl << "Postorder Display:" << endl;
			tree.displayPostOrder();
			break;
		case 6:
			cout << "Ending program..." << endl;
			break;
		default:
			cout << "ERROR:  Invalid option. Try again." << endl;
		}
	} while (choice != QUIT);

	system("pause");
}
