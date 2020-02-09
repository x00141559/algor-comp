#include "BinaryTree.h"
#include "IntTreeNode.h"
namespace Tree 
{

	
	BinaryTree::BinaryTree() : root(NULL) {}

	BinaryTree::~BinaryTree() {}

	void BinaryTree::insert(IntTreeNode* toadd, IntTreeNode* addhere)
	{
		if (addhere == nullptr) 
		{
			addhere = toadd;
			return;
		}

		if (addhere->leftLink == nullptr)

		{
			insert(addhere->leftLink, toadd);
			return;
		}
		if (addhere->rightLink == nullptr)
		{
			insert(addhere->rightLink, toadd);
			return;
		}
	}
	
		
		
		

	

	void BinaryTree::add(int toadd)
	{
		if (root == nullptr)
		{
			root = new IntTreeNode(toadd);
			return;
		}
		insert(root, new IntTreeNode(toadd));
	}
	// //"csegeek.com/csegeek/view/tutorials/algorithms/trees/tree_part3.php"


	// get the max of two no.s
	int max(int a, int b) {
		return ((a > b) ? a : b);
	}

	int BinaryTree::height(IntTreeNode* root) const
	{
		if (root == NULL)
		
			return 0;
		int lh = height(root->leftLink);
		int rh = height(root->rightLink);
		return 1 + max(lh , rh);
	}

	


}