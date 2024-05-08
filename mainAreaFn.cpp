#include <iostream>
#include "area.h"
#include "circle.h"
#include "triangle.h"
#include "square.h"

using namespace std;
using namespace shapes;

int main()
{
    while(true) {
        cout << "choose from the list of options below: " << endl;
        cout << "1. calculate the area of square" << endl;
        cout << "2. calculate the area of triangle" << endl;
        cout << "3. calculate the area of circle" << endl;
        cout << "4. Quit the process" << endl;

        int userChoice;
        cin >> userChoice;

        if (userChoice == 1) {
            double sideLength;

            cout << "input the value of side length of square: ";
            cin >> sideLength;

            square squareObj(sideLength);
            double area = area :: squareArea(squareObj);

            cout << "area of square is " << area << endl;
        }

        else if (userChoice == 2) {
            double base; 
            double height;
            
            cout << "Enter the base length of the triangle: ";
            cin >> base;
            
            cout << "Enter the height of the triangle: ";
            cin >> height;
            
            triangle triangleObj(base, height);
            double area = area ::triangleArea(triangleObj);
            
            cout << "Area of the triangle: " << area << endl;
            }
             
        else if (userChoice == 3) {
            double radius;
            
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            
            circle circleObj(radius);
            double area = area::circleArea(circleObj);
            
            cout << "Area of the circle: " << area << endl;
        }
        
        else if (userChoice == 4) {
            cout << "Exiting program" << endl;
            return 0;
        }
        
        else {
            cout << "not a valid choice, Please try again." << endl;
        }
    }

    return 0;
}
