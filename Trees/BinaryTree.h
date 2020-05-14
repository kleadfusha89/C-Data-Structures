#pragma once
#include "TreeNode.h"

class BinaryTree
{
private:
	TreeNode* root = 0;
	TreeNode* add(Student *s, TreeNode* p);
	bool contains(std::string key, TreeNode* p);
	void displayPostOrder(TreeNode* p);
	void displayPreOrder(TreeNode* p);
	void displayInOrder(TreeNode* p);


public:
	BinaryTree() { root = 0; }
	void add(Student *s);
	void displayPreOrder();
	void displayInOrder();
	void displayPostOrder();
	bool contains(std::string key);
	bool isEmpty() { return root == 0; }
	Student *search(std::string key);
};

