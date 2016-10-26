//Ryan Teo
//CS 172
//Ex04_05 11.13 The Course Class

#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
	//Test program
	Course course1("Philosophy", 30);
	course1.addStudent("Michael");
	course1.addStudent("Dwight");
	course1.addStudent("Jim");
	course1.dropStudent("Michael");
	string* students = course1.getStudents();
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
	{
		cout << students[i] << endl;
	}
}
