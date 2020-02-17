#pragma once
#include "TreeNode.h"
#include<string>
#define BINARYTREE_H
namespace Tree
{
	class BinaryTree
	{
	public:
		BinaryTree();
		~BinaryTree();
		void add(char toadd);
		int height() const;
		void print();
	
		void insert(char key, TreeNode* current);
		void print(TreeNode* node);
		void printInorder();
		void Preorder();
		void Postorder();
		bool search(char datas);
	private:
		TreeNode* root;
		void addNode(TreeNode* toAdd, TreeNode* addHere);
		void printInorder(TreeNode* node);
		int height(TreeNode* node) const;
		
		void Preorder(TreeNode* root);
		void Postorder(TreeNode* root);
		bool search(TreeNode*& root,char& dataIn);
	};
}
