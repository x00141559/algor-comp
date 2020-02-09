#pragma once
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include"IntTreeNode.h"
#include <cstddef>

namespace Tree 
{
	class BinaryTree
	{

	public:
	
		BinaryTree();
		virtual ~BinaryTree();
		void insert(IntTreeNode* toadd, IntTreeNode* addhere);
		void add(int toadd); //adds an item to the tree
		int height(IntTreeNode* root) const;
	
		IntTreeNode* root;
	protected:
		
		
	
	};

#endif BINARYTREE_H
}
