// created by me

//includes 
#include <iostream>
#include "rectangle.h"

using namespace std;

//main function
int main()
{
    int x,y;
    cout << "Rectangle !!" << endl;
    cin >> x >> y;
    
	// rectangle object
    Rectangle *rect1 = new Rectangle(x,y);
    cout << rect1->getHeight() << "\n";
    cout << rect1->getWidth() << "\n";
    cout << rect1->getArea() << "\n";
    cout << rect1->getPerimeter() << "\n";
    cout << "Thank You ! :) " << endl;
    return 0;
}
