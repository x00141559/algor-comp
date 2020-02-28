#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "HeapT.h"

using namespace std;
//mostly all methods from here
//ttps://gist.github.com/truncs/1810804#file-heap-cpp-L41
template <class T>
HeapT<T>::HeapT() {}

template <class T>
HeapT<T>::~HeapT() {}

template <class T>
int HeapT<T> ::getSize()
{
    return heap.size();
}

template <class T>
void HeapT<T>::swap(int child, int parent) {
    T temp;
    temp = child;
    child = parent;
    parent = temp;
}

template <class T>
int HeapT<T> ::getParent(int child) {
    if (child % 2 == 0)
        return (child / 2) - 1;
    else
        return child / 2;

}
template <class T>
int HeapT<T> ::getLeftChild(int parent) {
    return 2 * parent + 1;
}

template <class T>
int HeapT<T> ::getRightChild(int parent) {
    return 2 * parent + 2;
}


template <class T>
void HeapT<T> ::trickleUp() {
    int child = heap.size() - 1;
    int parent = getParent(child);

    while (child >= 0 && parent >= 0) {
        if(heap[child] > heap[parent])
        {
            
            swap(child, parent);
            child = parent;
            parent = getParent(child);
        }
       

    }


}

template <class T>
void HeapT<T> ::insert(T value) {

    heap.push_back(value);
    trickleUp();

}
template <class T>
T HeapT<T> ::remove() {
    int child = heap.size() - 1;
    swap(child, 0);

    T value = heap.back();
    heap.pop_back();

    trickleDown();

    return value;


}


template <class T>
void HeapT<T> ::trickleDown() {
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

//ttps://www.geeksforgeeks.org/cpp-program-for-heap-sort/
template <class T>
void HeapT<T> ::heapify(vector <T> vi, int n, int i)
{

    int largest = i; // Initialize largest as root 
    int l = 2 * i + 1; // left = 2*i + 1 
    int r = 2 * i + 2; // right = 2*i + 2 
   
    // If left child is larger than root 
    if ((l < n) && (vi[l] > vi[largest]))
        largest = l;

    // If right child is larger than largest so far 
    if (r < n && vi[r] > vi[largest])
        largest = r;

    // If largest is not root 
    if (largest != i) {
        swap(vi[i], vi[largest]);

        // Recursively heapify the affected sub-tree 
        heapify(vi, n, largest);
    }
}
//ttps://www.geeksforgeeks.org/cpp-program-for-heap-sort/
template <class T>
void HeapT<T> ::heapSort(vector <T> vi, int n)
{
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(vi, n, i);

    // One by one extract an element from heap 
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end 
        swap(vi[0], vi[i]);

        // call max heapify on the reduced heap 
        heapify(vi, i, 0);
    }
}
//template <class T>
//void HeapT<T>::print() 
//{
  //  int inp
    
    //for (int i = 0; i < input.size; i++)
    //{
      //  cout << i << endl;
    //}
//}