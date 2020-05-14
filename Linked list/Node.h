#pragma once

class Node
{
private:
	int data;
	Node *next;

public:
	Node();
	Node(int);
	Node(int, Node*);
	int getData();
	void setData(int);
	Node* getNext();
	void setNext(Node*);
};
