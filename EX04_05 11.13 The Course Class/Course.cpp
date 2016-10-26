#include <iostream>
#include "Course.h"
#include <string>
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

string* Course::doubleCapacity(const string* list, int size)
{
	//copies array into larger array with double the capacity
	string* doubleArray = new string[size * 2];

	for (int i = 0; i < size; i++)
	{
		doubleArray[i] = *(list + i);
	}

	delete[] list; //deletes original array

	return doubleArray; //returns the new doubled array
}


void Course::addStudent(const string& name)
{
	//checks if the capacity is full. If so, double the capacity using the function from EX04_02
	if (numberOfStudents >= capacity)
	{
		const string* list = students;
		string* newList = doubleCapacity(list, capacity);
	}

	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	students[numberOfStudents] = name;
	int studentNum; //variable to keep track of student being dropped
	for (int i = 0; i < numberOfStudents; i++) //runs through all students 
	{
		//checks if the student at i has the same name as the student being dropped
		if (students[i] == students[numberOfStudents]) 
		{
			studentNum = i; //assigns studentNum the value of i which is the number of the dropped student in the array
			numberOfStudents--; //remove student
		}
	}
	for (int i = studentNum; i < numberOfStudents; i++) //shift the rest of the students to fill the empty space
	{
		students[i] = students[i + 1];
	}

}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents()const
{
	return numberOfStudents;
}

void Course::clear()
{
	numberOfStudents = 0; //sets the number of students in the course to zero, dropping all students
}