#include "BinaryTree.h"
#include "TreeNode.h"
#include <iostream>
#include<string>

using namespace std;
namespace Tree
{
	BinaryTree::BinaryTree() : root(nullptr) {}

	BinaryTree::~BinaryTree() { delete root; }

	void BinaryTree::add(char toadd) 
	{
		
		insert(toadd, new TreeNode(toadd, nullptr, nullptr));
	}

	void BinaryTree::insert(char key, TreeNode* current) {
		if (current == NULL)
		{
			TreeNode* newnode = new TreeNode(key, nullptr, nullptr);
			newnode->data = key;
			current = newnode;
		}
		else {
			if (key < current->data)
				insert(key, current->leftChild);
			else
				insert(key, current->rightChild);
		}
		return;
	}
	int BinaryTree::height() const
	{
		return height(root);
	}
	int BinaryTree::height(TreeNode* node) const
	{
		if (root == nullptr)
		{
			return -1;
		}
		if (node == nullptr) {
			return 0;
		}
		else
		{
			int lHeight = (height(node->leftChild));
			int rHeight = (height(node->rightChild));
			if (lHeight > rHeight)
			{
				return lHeight + 1;
			}
			else {
				return rHeight + 1;
			}
		}
	}

	void BinaryTree::addNode(TreeNode* toAdd, TreeNode* addHere)
	{
		if (toAdd->data < addHere->data)
		{
			if (addHere->leftChild == nullptr)
			{
				addHere->leftChild = toAdd;
				return;
			}
			addNode(addHere->leftChild, toAdd);
		}
		else if (toAdd->data > addHere->data)
		{
			if (addHere->rightChild == nullptr)
			{
				addHere->rightChild = toAdd;
				return;
			}
			addNode(addHere->rightChild, toAdd);
		}
	}
	void BinaryTree::print()
	{
		print(root);

	
   }
	void BinaryTree::printInorder(TreeNode* node)
	{
		if (node == NULL)
			return;

		/* first recur on left child */
		printInorder(node->leftChild);

		/* then print the data of node */
		cout << node->data << " ";

		/* now recur on right child */
		printInorder(node->rightChild);
	}
	void BinaryTree::printInorder()
	{
		printInorder(root);
	}
	void BinaryTree::Preorder()
	{
		Preorder(root);
	}
	void BinaryTree::Preorder(TreeNode* root) {
		// base condition for recursion
		// if tree/sub-tree is empty, return and exit
		if (root == NULL) return;

		printf("%c ", root->data); // Print data
		Preorder(root->leftChild);     // Visit left subtree
		Preorder(root->rightChild);    // Visit right subtree
	}
	void BinaryTree::print(TreeNode* node)
	{
		if (node != NULL)
		{
			if (node->leftChild) print(node->leftChild);
			if (node->rightChild) print(node->rightChild);
			cout << "     " << node->data<< "\n ";
		}
		else return;
	}

	void BinaryTree::Postorder()
	{
		Postorder(root);
	}
	void BinaryTree::Postorder(TreeNode* root) {
		if (root == NULL) return;

		Postorder(root->leftChild);    // Visit left subtree
		Postorder(root->rightChild);   // Visit right subtree
		printf("%c ", root->data); // Print data
	}
	bool BinaryTree::search(char datas)
	{
		return
		search(root, datas);
	}
	bool BinaryTree::search(TreeNode*& root, char& dataIn) {
		
		printf("Visiting elements: ");
		
		if (dataIn == root->data) return true;
		if (root->isLeaf()) return false;
		if (dataIn < root->data)
			search(root->leftChild, dataIn);
		else
			search(root->rightChild, dataIn);
		return true;
	}



}

//resources //ttps://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/
//ttps://www.youtube.com/watch?v=xT10fDc_hq8
//ttps://stackoverflow.com/questions/13484943/print-a-binary-tree-in-a-pretty-way