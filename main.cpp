/*
Author   : Mohan Singh Bomrel
Program : Base Class Shape and its sub classes -Circle, Rectangle, Square
Date        : 2015-04-03
*/

#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
using namespace std;

int main()
{
	char userinput;
	cout << "###A Shape with default parameters###" << endl;
	Shape shapeObject1;
	cout << shapeObject1.toString();
	cout << "\n\n";
	cout <<"###A Shape with red Color and  unfilled arguments###" << endl;
	Shape shapeObject2("red", false);
	cout << shapeObject2.toString();
	cout << "\n\n";

	cout << "Enter the Shape of an Object: " << endl ;
	cout << "C for Circle, R for Rectangle, S for Square" << endl;
	cin >> userinput;

	switch(tolower(userinput))
	{
	case 'c' :
		{
		Circle circleObject1("brown", true, 5.0);
		cout << circleObject1.toString();
		cout << "\nThe radius of Cirlce is " << circleObject1.getRadius() << endl;
		cout << "The area  of Circle is " << circleObject1.getArea() << endl;
		cout << "The perimeter of Circle is " << circleObject1.getPerimeter() << endl;
		break;
		}
	case 'r':
		{
		Rectangle recObject1;
		cout << recObject1.toString();

		cout << "\n\n";
		Rectangle recObject2("pink",false,5,8);
		cout << recObject2.toString();

		cout << "\nThe area of Rectangle is " << recObject2.getArea() << endl;
		cout << "The perimeter of Rectangle is " << recObject2.getPerimeter() << endl;
		break;
		}
	case 's':
		{
		Square squObject1;
		cout << squObject1.toString();

		Square squObject2(5.0);
		cout <<"\n";
		cout << squObject2.toString();
		break;
		}
	default:
		cout << "Invalid Shape" << endl;

	}

}
