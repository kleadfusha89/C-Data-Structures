#pragma once

template <class T>
class Node
{
private:
	T data;
	Node<T> *next;

public:
	Node()
	{
		//data = 0;
		next = nullptr;
	}

	Node(T newData)
	{
		data = newData;
		next = nullptr;
	}

	Node(T newData, Node* nextNode)
	{
		data = newData;
		next = nextNode;
	}

	T getData()
	{
		return data;
	}

	void setData(T newData)
	{
		data = newData;
	}

	Node* getNext()
	{
		return next;
	}

	void setNext(Node* nextNode)
	{
		next = nextNode;
	}
};

