#pragma once
#include "Node.h"


class LinkedList
{
private:
	Node *first;

public:
	LinkedList();
	bool isEmpty();
	void addToBeginning(int);
	void addToEnd(int);
	void removeFromBeginning();
	void removeFromEnd();
	Node* find(int);
	void display();

	Node* remAll(int); 
};

