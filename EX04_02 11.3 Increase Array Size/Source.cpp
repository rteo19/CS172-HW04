//Ryan Teo
//CS 172
//Ex04_02 11.3 Increase Array Size

#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size); //function header

int* doubleCapacity(const int* list, int size)
{
	//copies array into larger array with double the capacity
	int* doubleArray = new int[size * 2]; 

	for (int i = 0; i < size; i++) 
	{
		doubleArray[i] = *(list + i);
	}

	delete[] list; //deletes original array

	return doubleArray; //returns the new doubled array
}
