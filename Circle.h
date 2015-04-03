#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

#include <string>

using namespace std;

class Circle : public Shape {
 public:
    Circle();
    Circle(double);
    Circle(string,bool,double);

    void setRadius(double);
    double getRadius();
    double getArea();
    double getPerimeter();

    string toString();
 private:
	double radius;
};
#endif // CIRCLE_H
