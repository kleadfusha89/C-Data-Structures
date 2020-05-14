#include "Node.h"

Node::Node()
{
	data = 0;
	next = nullptr;
}

Node::Node(int newData)
{
	data = newData;
	next = nullptr;
}

Node::Node(int newData, Node* nextNode)
{
	data = newData;
	next = nextNode;
}


int Node::getData()
{
	return data;
}

void Node::setData(int newData)
{
	data = newData;
}

Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* nextNode)
{
	next = nextNode;
}

