#include "BinaryTree.h"
#include <iostream>

void BinaryTree::add(Student *s)
{
	root = add(s, root);
}

TreeNode* BinaryTree::add(Student *s, TreeNode* p)
{
	if (p == 0)
	{
		p = new TreeNode(s);
	}
	else
	{
		if (s->id < p->key)
			p->left = add(s, p->left);
		else
			p->right = add(s, p->right);
	}
	return p;
}


bool BinaryTree::contains(std::string key)
{
	return contains(key, root);
}


bool BinaryTree::contains(std::string key, TreeNode* p)
{
	if (p == 0)
		return false;
	else if (p->key == key)
		return true;
	else if (key < p->key)
		return contains(key, p->left);
	else
		return contains(key, p->right);
}


void BinaryTree::displayPreOrder()
{
	displayPreOrder(root);
}

void BinaryTree::displayInOrder()
{
	displayInOrder(root);
}

void BinaryTree::displayPostOrder()
{
	displayPostOrder(root);
}

void BinaryTree::displayPostOrder(TreeNode *p)
{
	if (p != 0)
	{
		displayPostOrder(p->left);
		displayPostOrder(p->right);
		p->student->display();
	}
}

void BinaryTree::displayPreOrder(TreeNode *p)
{
	if (p != 0)
	{
		p->student->display();
		displayPreOrder(p->left);
		displayPreOrder(p->right);
	}
}

void BinaryTree::displayInOrder(TreeNode *p)
{
	if (p != 0)
	{
		displayInOrder(p->left);
		p->student->display();
		displayInOrder(p->right);
	}
}


Student* BinaryTree::search(std::string key)
{
	return search(key, root);
}


Student* BinaryTree::search(std::string key, TreeNode* p)
{
	if (p == 0)
		return 0;
	else if (key == p->key)
		return p->student;
	else if (key < p->key)
		return search(key, p->left);
	else
		return search(key, p->right);
}






