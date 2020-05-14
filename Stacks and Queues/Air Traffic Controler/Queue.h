#pragma once

#include "LinkedList.h"

template <class T>
class Queue
{
private:
	LinkedList<T> list;
public:
	bool isEmpty()
	{
		return list.isEmpty();
	}

	void enqueue(T newItem)
	{
		list.addToEnd(newItem);
	}

	T dequeue()
	{
		if (isEmpty())
			return 0;

		T item = list.getFirst()->getData();
		list.removeFromBeginning();
		return item;
	}

	T getFront()
	{
		return list.getFirst()->getData();
	}
};