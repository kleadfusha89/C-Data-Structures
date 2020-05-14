#pragma once
#include <iostream>
#include "Node.h"

template <class T>
class LinkedList
{
private:
	Node<T> *first;

public:
	LinkedList()
	{
		first = new Node<T>();
	}

	Node<T>* getFirst()
	{
		return first->getNext();
	}

	bool isEmpty()
	{
		return first->getNext() == nullptr;
	}

	void addToBeginning(T newData)
	{
		Node<T> *newNode = new Node<T>(newData);
		newNode->setNext(first->getNext());
		first->setNext(newNode);
	}

	void addToEnd(T newData)
	{
		Node<T>* temp = first;

		while (temp->getNext() != nullptr)
			temp = temp->getNext();

		temp->setNext(new Node<T>(newData));
	}

	void removeFromBeginning()
	{
		if (!isEmpty())
		{
			Node<T>* temp = first->getNext();
			first->setNext(temp->getNext());
			delete temp;
		}
	}

	void removeFromEnd()
	{
		Node<T> *trailer = first;
		Node<T> *temp = first->getNext();

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


	Node<T>* find(int key)
	{
		Node<T>* temp = first->getNext();
		while (temp != nullptr)
		{
			if (temp->getData() == key)
				return temp;

			temp = temp->getNext();
		}

		return nullptr;
	}

	void display()
	{
		Node<T>* temp = first->getNext();
		while (temp != nullptr)
		{
			std::cout << temp->getData() << " ";
			temp = temp->getNext();
		}
	}

	void removeDuplicates()
	{
		Node<T> *mainPtr = first->getNext();

		while (mainPtr != nullptr)
		{
			int val = mainPtr->getData();
			Node<T> *trailer = mainPtr;
			Node<T> *temp = mainPtr->getNext();
			while (temp != nullptr)
			{
				if (temp->getData() == val)
				{
					trailer->setNext(temp->getNext());
					temp->setNext(nullptr);
					delete temp;
					temp = trailer->getNext();
				}
				else
				{
					trailer = temp;
					temp = temp->getNext();
				}
			}
			mainPtr = mainPtr->getNext();
		}
	}
};

