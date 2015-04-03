#include <iostream>
#include "Square.h"
#include "Rectangle.h"
#include<sstream>
using namespace std;

Square::Square():Rectangle()
{

}

Square::Square(double side)
:Rectangle(side,side)
{
	setSide(side);
}

Square::Square(string shapeColor,bool filled, double side )
	:Rectangle(shapeColor, filled, side, side)
{
	setSide(side);
}

void Square::setSide(double side)
{
	 Rectangle::setWidth(side);
}

double Square::getSide()
{
	return Rectangle::getWidth();
}

void Square::setWidth(double side)
{
	Rectangle::setWidth(side);
}

void Square::setLength(double side)
{
	Rectangle::setWidth(side);
}

string Square::toString()
{
	stringstream side;
    side<< Rectangle::getWidth();
    return "A square with side = " + side.str() + " which is a subclass of  " + Rectangle::toString();
}
