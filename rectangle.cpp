#include "rectangle.h"

//constructor
Rectangle::Rectangle(int x,int y)
{
    height=y;
    width=x;
    calculateArea();
    calculatePerimeter();
}

//area 
void Rectangle::calculateArea()
{
    if(height>=0 && width >=0) {
        area=height*width;
    }
}

//perimeter
void Rectangle::calculatePerimeter()
{
    if(height>=0 && width >=0) {
        perimeter=2*(height+width);
    }
}
