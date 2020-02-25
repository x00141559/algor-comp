#include <iostream>
#include <vector>
#include<algorithm>
#include "Heap.h"
using namespace std;
//ttps://gist.github.com/truncs/1810804
void Heap::insert(int i)
{
	heap.push_back(i);
	trickleUp();
}
int Heap::getSize()
{
	return heap.size();

}

int Heap::getParent(int child) {
	if (child % 2 == 0)
		return (child / 2) - 1;
	else
		return child / 2;

}
void Heap::swap(int child, int parent) {
	int temp;
	temp = heap[child];
	heap[child] = heap[parent];
	heap[parent] = temp;
}
void Heap::trickleUp()
{
	int child = heap.size() - 1;
	int parent = getParent(child);

	while (child >= 0 && parent >= 0)
	{
		if (heap[child] > heap[parent])
		{
			swap(child, parent);
			child = parent;
			parent = getParent(child);
		}

	}

}


int Heap::getLeftChild(int parent) {
	return 2 * parent + 1;
}


int Heap::getRightChild(int parent) {
	return 2 * parent + 2;
}
	void Heap::trickleDown() {
		int parent = 0;

		while (1) {
			int left = getLeftChild(parent);
			int right = getRightChild(parent);
			int length = heap.size();
			int largest = parent;

			if (left < length && heap[left] > heap[largest])
				largest = left;

			if (right < length && heap[right] > heap[largest])
				largest = right;

			if (largest != parent) {
				swap(largest, parent);
				parent = largest;
			}
			else
				break;


		}

}
	
	int  Heap::remove() {
		int child = heap.size() - 1;
		swap(child, 0);

		int value = heap.back();
		heap.pop_back();

		trickleDown();

		return value;


	}


	void Heap::display(){ // Displaying heap elements  
		cout << "The heap elements are : ";
	for (int& x : heap)
		cout << x << " ";
	cout << endl;

	// sorting heap using sort_heap() 
	sort_heap(heap.begin(), heap.end());

	// Displaying heap elements  
	cout << "The heap elements after sorting are : ";
	for (int& x : heap)
		cout << x << " ";

	
}