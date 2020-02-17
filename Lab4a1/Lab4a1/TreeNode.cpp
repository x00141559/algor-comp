#include "TreeNode.h"
#include <cstddef>
#include <iostream>
#include<string>
using namespace std;
namespace Tree
{
	TreeNode::TreeNode(char data, TreeNode* rightChild, TreeNode* leftChild) : data(data), rightChild(rightChild), leftChild(leftChild) { }



	bool TreeNode::isLeaf() const
	{
		if (rightChild == nullptr && leftChild == nullptr) return true;
		else
		return false;
	}
}