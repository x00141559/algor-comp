#pragma once
class TreeNodeInt
{
	friend class BinaryTreeInt;
public:
	TreeNodeInt(int value);
	int getValue() const;
private:
	int value;
	TreeNodeInt* leftChild;
	TreeNodeInt* rightChild;
};