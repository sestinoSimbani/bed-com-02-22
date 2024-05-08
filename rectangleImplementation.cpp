#include <iostream>
#include "Rectangle.h"

using namespace std;

int main ()
{
    Rectangle rectOne;

    float userLength;
    float userWidth;

    cout << "please input the value of length: " << endl;
    cin >> userLength;

    cout << "please input the value of width: " << endl;
    cin >> userWidth;

    rectOne.setLength(userLength);
    rectOne.setWidth(userWidth);

    cout << " the area of rectangle is " << rectOne.rectangleArea();

    Rectangle rectTwo;

    cout << "provide the value of length for the second rectangle: ";
    cin >> userLength;

    cout << "provide the value of width fro the second rectangle: ";
    cin >> userWidth;

    rectTwo.setLength(userLength);
    rectTwo.setWidth(userWidth);

    cout << "the area of the second rectangle is: " << rectTwo.rectangleArea() << endl;

    return 0;
}