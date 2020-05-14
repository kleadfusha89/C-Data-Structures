#include "LinkedList.h"
#include <iostream>


LinkedList::LinkedList()
{
	first = new Node();
}

bool LinkedList::isEmpty()
{
	return first->getNext() == nullptr;
}

void LinkedList::addToBeginning(int newData)
{
	// Creating new node
	Node *newNode = new Node(newData);

	// Putting data into new node
	newNode->setNext(first->getNext());


	first->setNext(newNode);
}


void LinkedList::addToEnd(int newData)
{
	Node* temp = first;

	while (temp->getNext() != nullptr)
		temp = temp->getNext();

	temp->setNext(new Node(newData));
}


void LinkedList::removeFromBeginning()
{
	if (!isEmpty())
	{
		Node* temp = first->getNext();
		first->setNext(temp->getNext());
		delete temp;
	}
}


void LinkedList::removeFromEnd()
{
	Node *trailer = first;
	Node *temp = first->getNext();

	if (!isEmpty())
	{
		while (temp->getNext() != nullptr)
		{
			trailer = temp;
			temp = temp->getNext();
		}

		trailer->setNext(nullptr);
		delete temp;
	}
}

Node* LinkedList::find(int key)
{
	Node* temp = first->getNext();
	while (temp != nullptr)
	{
		if (temp->getData() == key)
			return temp;

		temp = temp->getNext();
	}

	return nullptr;
}

void LinkedList::display()
{
	Node* temp = first->getNext();
	while (temp != nullptr)
	{
		std::cout << temp->getData() << " ";
		temp = temp->getNext();
	}
}

Node* LinkedList::remAll(int key)
{
	Node* thisNode = new Node;
	Node* lastNode = new Node;

	thisNode = first;

	while (thisNode->getData() != key)
	{
		lastNode = thisNode;
		thisNode = thisNode->getNext();
	}

	lastNode->setNext(thisNode->getNext());

	return nullptr;
}
