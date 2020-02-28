#pragma once
#include <iostream>
#include <vector>

using namespace std;
template <class T>
class HeapT
{
public:
    HeapT();
    void insert(T);
    T remove();
    int getSize();
    ~HeapT();
   // void print();

	vector<T> heap;
    void trickleUp();
    void trickleDown();
    void heapify(vector<T> vi, int n, int i);
    void heapSort(vector<T> vi, int n);
 
    void swap(int child, int parent);
    int getLeftChild(int parent);
    int getRightChild(int parent);
    int getParent(int child);
   
};


