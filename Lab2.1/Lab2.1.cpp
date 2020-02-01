// Lab2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Q1.
template<class T>
void swap(T& var1, T& var2)
{
	T temp;
	temp = var1;
	var1 = var2;
	var2 = temp;
}

// I got this snippet fromhttps://stackoverflow.com/questions/15672805/c-swapping-pointers
template<class T>
void swap(T* r, T* s)
{
	T temp = *r;
	*r = *s;
	*s = temp;
	return;
}

//Q2
template<class T>
void multiples(T &sum, T x, int n)
{


		sum = 1 + x + (n*x )+ (x*n);
		
	
	
}
//I did not know how to do this one well

//Q3
template<class T1, class T2>
T1 init(T1 num1, T1 num2, T2& start)
{
	 start = 1;
	 double calc = num1 + num2;
	return num1 + num2;
}

//Q4
//got a lot of this code from geeksforgeeks.org/cpp-program-for-quicksort/

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];    // pivot 
	int i = (low - 1);  // Index of smaller element 

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or 
		// equal to pivot 
		if (arr[j] <= pivot)
		{
			i++;    // increment index of smaller element 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
template<class T>
void quicksort( T arr[], T low, T high) {
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		   at right place */
	int	pi = partition(arr, low, high);
	//got stuck here
	// int sort1 =	quickSort(arr, low, pi - 1);  // Before pi
	// int sort2 =  quickSort(arr, pi + 1, high); // After pi
	}

	
    }


int main()
{
	

	//Q1.
	cout << "//Q1.";
	int i1 = 1;
	int i2 = 2;
	float f1 = 11111;
	float f2 = 22222;
	
	
	cout << " Before Swap integer values are " << i1 << " " << i2 << endl;
	std::swap<int>(i1, i2);
    cout << "After Swapped integer values are " << i1 << " " << i2 << endl;

	cout << "\n";

	cout << " Before Swap float values are " << f1 << " " << f2 << endl;
	std::swap<float>(f1, f2);
	cout << "After Swapped float values are " << f1 << " " << f2 << endl;

	// I am confused what is the difference by passing by memory and address, are they the same?
	// so I used a pointer to pass by memory 
	cout << "Pass by reference" << endl;
	cout << " Before Swap integer values are " << i1 << " " << i2 << endl;
	swap<int>(&i1, &i2);
	cout << "After Swapped integer values are " << i1 << " " << i2 << endl;

	cout << "\n";

	cout << " Before Swap float values are " << f1 << " " << f2 << endl;
	swap<float>(&f1, &f2);
	cout << "After Swapped float values are " << f1 << " " << f2 << endl;

	//Q2
	cout << "Q2" << endl;
	int sum;
	multiples<int>(sum, 2, 3);
	cout << sum << endl;
	cout << "\n";

	//Q3
	
	double star = 2.2;
	cout << "Q3" << endl;
	init<int>(2, 3, star);
	
	cout << "\n";

	//Q4
	//int pi = 0;
	int arri[4] = { 7, 3, 4, 5 };
	quicksort(arri, 3, 7);
}

