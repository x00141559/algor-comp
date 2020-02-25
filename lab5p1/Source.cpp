#include <iostream>
#include <vector>
#include<algorithm>
#include "Heap.h"

using namespace std;
//ttps://gist.github.com/truncs/1810804
int main()
{
    Heap h;
  
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.display();
    h.remove();
    h.display();
   
   cout << h.getSize();
  
    system("pause");
    return 0;
}

