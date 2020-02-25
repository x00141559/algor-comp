#include <iostream>
#include "BinarySTree.h"
using namespace std;
int main()
{
	BinarySTree b;
	cout << "adding nodes";
	b.add(1);
	b.add(2);
	b.add(3);
	b.add(4);
	cout << "printing nodes";
	b.print();
	cout << "printing height \n";
	cout << b.height() << "\n";
	cout << "printing min value \n";
	cout << b.minValue();
	cout << "printing maxvalue \n";
	cout << b.maxValue();
	cout << "Checking if it is a search tree\n";
	cout<< b.isBST();
	cout << "Checking if it is a search tree with recursion\n";
	cout << b.isBST2();

	system("pause");
	return 0;
}