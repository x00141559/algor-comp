#include "TreeNode.h"

TreeNode::TreeNode(int value) : value(value), rightChild(nullptr), leftChild(nullptr) {}

int TreeNode::getValue() const
{
	return TreeNode::value;
}