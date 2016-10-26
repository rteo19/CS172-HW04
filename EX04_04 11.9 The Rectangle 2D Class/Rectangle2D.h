#pragma once
using namespace std;

class Rectangle2D //creates Rectangle2D class
{
private:
	double x;
	double y;
	double width;
	double height;
public:
	Rectangle2D(); //No argument constructor

	Rectangle2D(double x, double y, double width, double height); // Default Constructor

	double getX() const;

	void setX(double x);

	double getY() const;

	void setY(double y);

	double getWidth() const;

	void setWidth(double width);

	double getHeight() const;

	void setHeight(double height);

	double getArea() const;

	double getPerimeter() const;

	bool contains(double x, double y) const;

	bool contains(const Rectangle2D &r);

	bool overlaps(const Rectangle2D &r);

};
