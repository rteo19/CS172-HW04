//Ryan Teo
//CS 172
//Ex04_02 11.5 Find the Smallest Element

#include <iostream>
using namespace std;

int smallestElement(const int size, int* num); //function header

int main()
{
	//test for the function
	int test[] = { 1,2,4,5,10,100,2,-22 };
	int x = smallestElement(8, test);
	cout << "The smallest element is " << x << endl;
}

int smallestElement(const int size, int* num)
{
	int* ptr = num; 
	int smallest = ptr[0]; //Sets the first element in the array as the current smallest
	for (int i = 0; i < size; i++) //checks every element in the array and compares it to the current smallest
	{
		if (*(ptr + i) < smallest) //if a smaller element is found it becomes the new smallest
		{
			smallest = *(ptr + i);
		}
	}

	return smallest;
}

