//Ryan Teo
//CS 172
//Ex04_01 11.1 Analyze Input

#include <iostream>
using namespace std;

int main()
{
	int arraySize;
	cout << "Enter the array size: "; //prompt user for array size
	cin >> arraySize;

	int* numbers = new int[arraySize];
	int sum = 0;
	int avg = 0;
	int aboveAvg = 0;

	for (int i = 0; i < arraySize; i++) //reads integers into array and finds average
	{
		cout << "Enter a number: ";
		cin >> *(numbers + i);
		sum += *(numbers + i);
		avg = sum / arraySize;
	}

	for (int i = 0; i < arraySize; i++) //finds numbers higher than the average
	{
		if (*(numbers + i) > avg)
		{
			aboveAvg++;
		}
	}
//outputs the average and how many numbers are higher than it

	cout << "The average is " << avg << endl;

	cout << aboveAvg << " numbers are above the average" << endl;
	
	delete[] numbers;
}
