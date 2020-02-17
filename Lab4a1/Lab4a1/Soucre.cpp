
#include "BinaryTree.h"
#include <iostream>
#include<string>
using namespace std;

    int main()
    {
       
        Tree::BinaryTree b;
        cout << "Before addition of nodes" << endl;
        cout << "The height of the tree is " << b.height() << endl;
        b.add('a');
        b.add('o');
        b.add('i');
        b.add('f');
        b.add('e');
        b.add('b');
        b.add('e');
       
        cout << "Checking if z is in the tree" << endl;
        cout << b.search('z') << endl;
        cout << "Checking if a is in the tree" << endl;
        cout << b.search('a') << endl;
        b.search('a');
        cout << "After addition of nodes" << endl;
        cout << "The height of the tree is " << b.height() << endl;

        cout << "Print Tree" << endl;
        b.print();
        cout << "Print Tree in order" << endl;
        b.printInorder();
        cout << '\n' << endl;
        cout << "Print Tree Pre Order" << endl;
        b.Preorder();
        cout << "Print Tree PostOrder" << endl;
        b.Preorder();
     
        b.~BinaryTree();
     
        system("pause");
        return 0;

    }

    //resources //ttps://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/
//ttps://www.youtube.com/watch?v=xT10fDc_hq8
//ttps://stackoverflow.com/questions/13484943/print-a-binary-tree-in-a-pretty-way
//ttps://www.tutorialspoint.com/data_structures_algorithms/tree_traversal_in_c.htm
//ttps://gist.github.com/mycodeschool/10016271
//ttps://stackoverflow.com/questions/27840322/c-instance-of-object-unable-to-read-memory
