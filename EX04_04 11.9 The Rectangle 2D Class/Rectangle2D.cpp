#include <iostream>
#include "Rectangle2D.h"
#include <cmath>
using namespace std;

Rectangle2D::Rectangle2D() //creates default rectangle
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}


Rectangle2D::Rectangle2D(double x, double y, double width, double height) //creates a rectangle w/ the specified values
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

double Rectangle2D::getX() const
{
	return x;
}

void Rectangle2D::setX(double x)
{
	this->x = x;
}

double Rectangle2D::getY() const
{
	return y;
}

void Rectangle2D::setY(double y)
{
	this->y = y;
}

double Rectangle2D::getWidth() const
{
	return width;
}

void Rectangle2D::setWidth(double width)
{
	this->width = width;
}

double Rectangle2D::getHeight() const
{
	return height;
}

void Rectangle2D::setHeight(double height)
{
	this->height = height;
}

double Rectangle2D::getArea() const
{
	return width * height;
}

double Rectangle2D::getPerimeter() const
{
	return (width + height) * 2;
}

bool Rectangle2D::contains(double x, double y) const
{
	//a point is in the rectangle if the distance between it and the center of the
	//rectangle along the x-axis is less than the width and if the distance between 
	//it and the center of the rectangle along they y-axis is less than the height
	if (abs(x - this->x) <= width && abs(y - this->y) <= height)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Rectangle2D::contains(const Rectangle2D &r)
{
	//calculates the x and y values of all the edges of both rectangles 
	double rLeftMin = r.x - r.width / 2;
	double leftMin = x - width / 2;
	double rRightMax = r.x + r.width / 2;
	double rightMax = x + width / 2;
	double rTopMax = r.y + r.height / 2;
	double topMax = y + height / 2;
	double rBottomMin = r.y - r.height / 2;
	double bottomMin = y - height / 2;

	//if all the edges of Rectangle2D &r are within the edges of Rectangle2D,
	//then Rectangle2D &r is contained in Rectangle2D
	if (rLeftMin >= leftMin && rRightMax <= rightMax && rTopMax <= topMax && rBottomMin >= bottomMin)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool Rectangle2D::overlaps(const Rectangle2D &r)
{
	//calculates the x and y values of all the edges of both rectangles 
	double rLeftMin = r.x - r.width / 2;
	double leftMin = x - width / 2;
	double rRightMax = r.x + r.width / 2;
	double rightMax = x + width / 2;
	double rTopMax = r.y + r.height / 2;
	double topMax = y + height / 2;
	double rBottomMin = r.y - r.height / 2;
	double bottomMin = y - height / 2;

	//if any edge of Rectangle2D &r is between two edges of Rectangle2D,
	//then the rectangles overlap
	if ((rLeftMin <= rightMax && rLeftMin >= leftMin) || (rRightMax >= leftMin && rRightMax <= rightMax) ||
		(rTopMax >= bottomMin && rTopMax <= topMax) || (rBottomMin <= topMax && rBottomMin >= bottomMin))
	{
		return true;
	}
	else
	{
		return false;
	}
}