#include <iostream>
#include "Rectangle.h"
#include <sstream>

using namespace std;

Rectangle::Rectangle()
{
	setWidth(1.0);
	setLength(1.0);
}

Rectangle::Rectangle(double recLength, double recWidth)
{
	setWidth(recWidth);
	setLength(recLength);
}

Rectangle::Rectangle ( string shapeColor, bool colorFilled,double recLength,double recWidth)
:Shape(shapeColor, colorFilled)
{
	setWidth(recWidth);
	setLength(recLength);
}

void Rectangle::setWidth(double recWidth)
{
	width = recWidth;
}

double Rectangle::getWidth()
{
	return width;
}

void Rectangle::setLength(double recLength)
{
	length = recLength;
}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::getArea()
{
	return  getLength()*getWidth();
}

double Rectangle::getPerimeter()
{
	return 2*(getLength()+getWidth());
}

string Rectangle::toString()
{
	stringstream length, width;
    width << getWidth();
    length << getLength();
	return "A rectangle with width= " + width.str() + " and length= " + length.str()
	 + " which is a subclass of  " + Shape::toString();
}
