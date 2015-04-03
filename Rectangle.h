#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {
public:
	Rectangle();
    Rectangle(double,double);
    Rectangle(string,bool,double,double);

    void setWidth(double);
    double getWidth();
    void setLength(double);
    double getLength();
    double getArea();
    double getPerimeter();

    string toString();
private:
	double width;
	double length;
};
#endif // RECTANGLE_H
