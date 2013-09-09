#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle(int x,int y);
    int getHeight() { return height; }
    int getWidth() { return width; }
    int getArea() { return area; }
    int getPerimeter() { return perimeter; }

private:
    void calculateArea();
    void calculatePerimeter();

private:
    int height;
    int width;
    int area;
    int perimeter;

};

#endif // RECTANGLE_H
