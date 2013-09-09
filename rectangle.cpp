#include "rectangle.h"

Rectangle::Rectangle(int x,int y)
{
    height=y;
    width=x;
    calculateArea();
    calculatePerimeter();
}

void Rectangle::calculateArea()
{
    if(height>=0 && width >=0) {
        area=height*width;
    }
}

void Rectangle::calculatePerimeter()
{
    if(height>=0 && width >=0) {
        perimeter=2*(height+width);
    }
}
