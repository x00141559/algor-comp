#include "BinarySTree.h"
#include <iostream>

using namespace std;

BinarySTree::BinarySTree() :root(nullptr) {}

BinarySTree::~BinarySTree() {}

void BinarySTree::addNode(TreeNode* at, TreeNode* toAdd)
{
	if (toAdd->value < at->value)
	{
		if (at->leftChild == nullptr)
		{
			at->leftChild = toAdd;
			return;
		}
		addNode(at->leftChild, toAdd);
	}
	else if (toAdd->value > at->value)
	{
		if (at->rightChild == nullptr)
		{
			at->rightChild = toAdd;
			return;
		}
		addNode(at->rightChild, toAdd);
	}
}

void BinarySTree::add(int toAdd)
{
	if (root == nullptr)
	{
		root = new TreeNode(toAdd);
		return;
	}
	addNode(root, new TreeNode(toAdd));
}
void  BinarySTree::print(TreeNode* p)
{
	if (p == nullptr)
		return;
	print(p->leftChild);
	cout << p->value << endl;
	print(p->rightChild);
}
void  BinarySTree::print()
{
	print(root);
}

int BinarySTree::height() const
{
	return height(root);
}


int BinarySTree::height(TreeNode* h) const
{
	if (root == nullptr) return -1;
	if (h == nullptr)
		return 0;
	else
	{
		/* compute the depth of each subtree */
		int lDepth = height(h->leftChild);
		int rDepth = height(h->rightChild);

		if (lDepth > rDepth) return lDepth + 1;
		return rDepth + 1;
	}
}
//ttps://www.geeksforgeeks.org/find-the-minimum-element-in-a-binary-search-tree/

int BinarySTree::minValue(TreeNode* node)
{
	TreeNode* current = node;

	/* loop down to find the leftmost leaf */
	while (current->leftChild != NULL)
	{
		current = current->leftChild;
	}
	return(current->value);
}
int BinarySTree::minValue()
{
	return minValue(root);
}

int BinarySTree::maxValue(TreeNode* node)
{
	TreeNode* current = node;
	while (current->rightChild != NULL)
	{
		current = current->rightChild;
	}
	return(current->value);
}

int BinarySTree::maxValue()
{
	return maxValue(root);
}


/*
 Returns true if a binary tree is a binary search tree.
*/
//ttp://cslibrary.stanford.edu/110/BinaryTrees.html
int BinarySTree::isBST(TreeNode* node) {
	if (node == NULL) return(true);
	// false if the max of the left is > than us

	// (bug -- an earlier version had min/max backwards here)
	if (node->leftChild != NULL && maxValue(node->leftChild) > node->value)
		return(false);

	// false if the min of the right is <= than us
	if (node->rightChild != NULL && minValue(node->rightChild) <= node->value)
		return(false);

	// false if, recursively, the left or right is not a BST
	if (!isBST(node->leftChild) || !isBST(node->rightChild))
		return(false);

	// passing all that, it's a BST
	return(true);
}

int BinarySTree::isBST()
{
	return isBST(root);
}
/*
 Returns true if the given tree is a binary search tree
 (efficient version).
*/
int BinarySTree::isBST2(TreeNode* node) {
	return(isBSTUtil(node, INT_MIN, INT_MAX));
}
/*
 Returns true if the given tree is a BST and its
 values are >= min and <= max.
*/
int BinarySTree::isBSTUtil(TreeNode* node, int min, int max)
{
	if (node == NULL) return(true);

	// false if this node violates the min/max constraint
	if (node->value<min || node->value>max) return(false);

	// otherwise check the subtrees recursively,
	// tightening the min or max constraint
	return
		(isBSTUtil(node->leftChild, min, node->value) &&
		isBSTUtil(node->rightChild, node->value + 1, max)
		);
}

int BinarySTree::isBST2()
{
	return isBST(root);
}