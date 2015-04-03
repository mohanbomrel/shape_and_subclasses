#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include<cmath>
#include<sstream>
#define PI 3.1415

using namespace std;

Circle::Circle()
{
	setRadius(1.0);
}

Circle::Circle(double shapeRadius)
{
	setRadius(shapeRadius);
}
Circle::Circle(string shapeColor, bool colorFilled,double shapeRadius)
:Shape(shapeColor, colorFilled)
{
	setRadius(shapeRadius);
}

void Circle::setRadius(double shapeRadius)
{
	radius = shapeRadius;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	return PI*(pow(getRadius(),2));
}

double Circle::getPerimeter()
{
	return 2*PI*getRadius();
}

string Circle::toString()
{
	stringstream radius;
	radius << getRadius();
	return "A circle with radius = " + radius.str()+ "  which is a subclass of " +  Shape::toString();
}


