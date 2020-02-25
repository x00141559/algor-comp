#pragma once
class TreeNode
{
	friend class BinarySTree;
public:
	TreeNode(int value);
	int getValue() const;
private:
	int value;
	TreeNode* leftChild;
	TreeNode* rightChild;
};
