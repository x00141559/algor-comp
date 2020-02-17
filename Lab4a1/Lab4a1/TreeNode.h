#pragma once
#define TREENODE_H
#include<string>

namespace Tree
{
	class TreeNode
	{
		friend class BinaryTree;
	public:
		TreeNode(char data, TreeNode* rightChild, TreeNode* leftChild);
		bool isLeaf() const;
	
		
		TreeNode* rightChild;
		TreeNode* leftChild;
		char data;
	protected:
		
		
	};
}

