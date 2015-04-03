#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"
#include <string>

class Square : public Rectangle
{
public:
	Square();
    Square(double);
    Square(string,bool,double);

    void setSide(double);
    double getSide();
    void setWidth(double);
    void setLength(double);

    string toString();
};
#endif // SQUARE_H
