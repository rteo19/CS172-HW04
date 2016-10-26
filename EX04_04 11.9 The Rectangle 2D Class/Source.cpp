//Ryan Teo
//CS 172
//EX04_04 11.9 The Rectangle 2D Class

#include <iostream>
#include "Rectangle2D.h"
#include <cmath>
using namespace std;

int main()
{
	//test program
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	cout << "The area of r1 is " << r1.getArea() << endl;
	cout << "The perimeter of r1 is " << r1.getPerimeter() << endl;
	
	bool r1Contains3 = r1.contains(3, 3);
	if (r1Contains3 == true)
	{
		cout << "r1 contains the point (3, 3)" << endl;
	}
	else
	{
		cout << "r1 does not contain the point (3, 3)" << endl;
	}

	bool r1Containsr2 = r1.contains(r2);
	if (r1Containsr2 == true)
	{
		cout << "r1 contains r2" << endl;
	}
	else
	{
		cout << "r1 does not contain r2" << endl;
	}

	bool r1Overlaps = r1.overlaps(r3);
	if (r1Overlaps == true)
	{			
		cout << "r1 overlaps r3" << endl;
	}
	else
	{
		cout << "r1 does not overlap r3" << endl;
	}
	
}