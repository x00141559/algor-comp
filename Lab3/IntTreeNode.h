#pragma once
#include <cstddef>

namespace Tree 
{
	class IntTreeNode

	{
		friend class BinaryTree;
	public:
		
		
			
		IntTreeNode(int data);
	private:
		
		int data;
		
		IntTreeNode* leftLink;
		IntTreeNode* rightLink;
	};


}


