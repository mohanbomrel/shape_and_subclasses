#include<iostream>
#include <string>
#include "Shape.h"
#include<sstream>

using namespace std;

Shape::Shape()
{
    color = "green";
    filled = true;
}

Shape::Shape(string shapeColor, bool shapeFilled)
{
    setColor(shapeColor);
    setFilled(shapeFilled);
}

void Shape::setColor(string shapeColor)
{
	color = shapeColor;
}

string Shape::getColor()
{
	return color;
}

void Shape::setFilled(bool shapeFilled)
{
	filled = shapeFilled;
}

bool Shape::isFilled()
{
	return filled;
}

string Shape::toString()
{
	string text;
	text  = (isFilled() == true )? "Filled":"Not Filled";
	stringstream color;
	color << getColor();

	return  "A shape with color of " +  color.str() + " and " + text;
}
