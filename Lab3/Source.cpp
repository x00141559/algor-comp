#include "BinaryTree.h"
#include "IntTreeNode.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	Tree::BinaryTree  t;
	int next;
	cout << "Enter a list of integers" << endl;
	cin >> next;

	while (next >= 0)
	{
		t.add(next);
		cin >> next;
		std::cout << t.root << endl;
	}

	int h = t.height(t.root);
	cout << "height is " << h << endl;
	system("pause");
	return 0;
}