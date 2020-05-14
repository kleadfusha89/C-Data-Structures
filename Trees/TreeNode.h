#pragma once
#include <string>
#include "Student.h"

class TreeNode
{
public:
	std::string key;
	Student *student;
	TreeNode* left;
	TreeNode* right;

	TreeNode(Student *s)
	{
		key = s->id;
		student = s;
		left = right = 0;
	}
};
