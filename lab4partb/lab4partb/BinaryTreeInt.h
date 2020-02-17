#pragma once
#include "TreeNodeInt.h"
class BinaryTreeInt
{
public:
	BinaryTreeInt();
	~BinaryTreeInt();
	void print();
	void add(int toAdd);
	int height() const;
	int hasPathSum(int sum);
	void printPaths();
	void printArray(int ints[], int len);
private:
	TreeNodeInt* root;
	void addNode(TreeNodeInt* at, TreeNodeInt* toAdd);
	void print(TreeNodeInt* p);
	int height(TreeNodeInt* h) const;
	bool hasPathSum(TreeNodeInt* Node, int sum);
	void printPaths(TreeNodeInt* node);
	void printPathsRecur(TreeNodeInt* node, int path[], int pathLen);

};
