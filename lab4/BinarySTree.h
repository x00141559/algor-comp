#pragma once
#include "TreeNode.h"
class BinarySTree
{
public:
	BinarySTree();
	~BinarySTree();
	void print();
	void add(int toAdd);
	int height() const;
	int minValue();
	int maxValue();
	int isBST();
	int isBST2();
private:
	TreeNode* root;
	void addNode(TreeNode* at, TreeNode* toAdd);
	void print(TreeNode* p);
	int height(TreeNode* h) const;
	int minValue(TreeNode* node);	int maxValue(TreeNode* node);
	int isBST(TreeNode* node);
	int isBST2(TreeNode* node);	int isBSTUtil(TreeNode* node, int min, int max);
};