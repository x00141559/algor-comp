#pragma once
#include <vector>
using namespace std;

class Heap
{
public:
	//ttps://gist.github.com/truncs/1810804	
	void insert(int i);
	vector <int> heap;
	int remove();
    int getSize();
	void display();
private:
	int getLeftChild(int parent);
	int getRightChild(int parent);
	void trickleDown();
	void trickleUp();
	int getParent(int child);
    void swap(int child, int parent);

	
};




