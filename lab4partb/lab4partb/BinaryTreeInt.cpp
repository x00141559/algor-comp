#include "BinaryTreeInt.h"
#include <iostream>

using namespace std;

BinaryTreeInt::BinaryTreeInt() :root(nullptr) {}

BinaryTreeInt::~BinaryTreeInt() {}

void BinaryTreeInt::addNode(TreeNodeInt* at, TreeNodeInt* toAdd)
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

void BinaryTreeInt::add(int toAdd)
{
	if (root == nullptr)
	{
		root = new TreeNodeInt(toAdd);
		return;
	}
	addNode(root, new TreeNodeInt(toAdd));
}
void  BinaryTreeInt::print(TreeNodeInt* p)
{
	if (p == nullptr)
		return;
	print(p->leftChild);
	cout << p->value << endl;
	print(p->rightChild);
}
void  BinaryTreeInt::print()
{
	print(root);
}

int BinaryTreeInt::height() const
{
	return height(root);
}


int BinaryTreeInt::height(TreeNodeInt* h) const
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
//ttps://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/

bool BinaryTreeInt::hasPathSum(TreeNodeInt* Node, int sum)
{
	/* return true if we run out of tree and sum==0 */
	if (Node == NULL)
	{
		return (sum == 0);
	}

	else
	{
		bool ans = 0;

		/* otherwise check both subtrees */
		int subSum = sum - Node->value;

		/* If we reach a leaf node and sum becomes 0 then return true*/
		if (subSum == 0 && Node->leftChild == NULL && Node->rightChild == NULL)
			return 1;

		if (Node->leftChild)
			ans = ans || hasPathSum(Node->leftChild, subSum);
		if (Node->rightChild)
			ans = ans || hasPathSum(Node->rightChild, subSum);

		return ans;
	}
}
//ttps://www.geeksforgeeks.org/root-to-leaf-path-sum-equal-to-a-given-number

int BinaryTreeInt::hasPathSum(int sum)
{
	return
	hasPathSum(root, sum);

}
/* Recursive helper function -- given
a node, and an array containing the
path from the root node up to but not
including this node, print out all the
root-leaf paths. */
void BinaryTreeInt::printPathsRecur(TreeNodeInt* node, int path[], int pathLen)
{
	if (node == NULL) return;

	/* append this node to the path array */
	path[pathLen] = node->value;
	pathLen++;

	/* it's a leaf, so print the path that led to here */
	if (node->leftChild == NULL && node->rightChild == NULL)
	{
		printArray(path, pathLen);
	}
	else
	{
		/* otherwise try both subtrees */
		printPathsRecur(node->leftChild, path, pathLen);
		printPathsRecur(node->rightChild, path, pathLen);
	}
}
/* Utility that prints out an array on a line */
void BinaryTreeInt::printArray(int ints[], int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		cout << ints[i] << " ";
	}
	cout << endl;
}
/* Given a binary tree, print out
all of its root-to-leaf paths,
one per line. Uses a recursive helper
to do the work.*/
void BinaryTreeInt::printPaths(TreeNodeInt* node)
{
	int path[1000];
	printPathsRecur(node, path, 0);
}

void BinaryTreeInt::printPaths()
{
	printPaths(root);
}
//ttps://www.geeksforgeeks.org/given-a-binary-tree-print-out-all-of-its-root-to-leaf-paths-one-per-line/