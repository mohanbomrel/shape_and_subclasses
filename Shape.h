#include <string>
#ifndef SHAPE_H
#define SHAPE_H
using namespace std;

class Shape
{
   public:
    Shape();
    Shape(string, bool);

    void setColor(string);
    string getColor();
    void setFilled(bool);
    bool isFilled();

    string toString();

   private:
   	string color;
    bool filled;

};
#endif // SHAPE_H
