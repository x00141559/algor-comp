#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "HeapT.h"
#include "HeapT.cpp"
using namespace std;
int main()
{
#include <iostream>
#include <vector>

  

   
        ////HeapT<int>  input = { 1, 2, 3, 4, 5 };
       // std::vector<int>
        //print(input);

    
    HeapT<int> h;
    h.insert(1);
    h.insert(2);

   for (int i = 0; i < h.getSize(); i++)
    {
       cout << i << endl;
   }
   h.remove();
   cout << "After removal" << "\n" << endl;
   for (int i = 0; i < h.getSize(); i++)
   {
       cout << i << endl;
   }
   vector <int> vi = { 1,2,3,4 };
   make_heap(vi.begin(), vi.end());
   cout << "Before Sort" << "\n" << endl;
   for (int i = 0; i < vi.size() +1; i++)
   {
       cout << i << endl;
   }

  h.heapSort(vi, 4);
  cout << "After Sort" << "\n" << endl;
  for (int i = 0; i < vi.size() + 1; i++)
  {
      cout << i << endl;
  }
  // h.printVector(vi);
  // h.heapSort(vi, 10);

   //int n = sizeof(vi) / sizeof(vi[0]);
 
  // h.heapSort(vi, n);

    system("pause");
    return 0;
}

