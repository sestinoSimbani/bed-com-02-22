#include <iostream>
#include <random>

using namespace std;

void squareArea () {
    double sideLength;
    cout << "enter value for the side length of a square: ";
    cin >> sideLength;

    double areaOfsquare = sideLength * 2;
    cout << "the area of square is " << areaOfsquare;
}

void rectangleArea () {
    double Length, width;
    cout << "enter value for the length of a rectangle: ";
    cin >> Length;

    cout << "enter the value for width of the rectangle: ";
    cin>> width;

    double areaOfrectangle = Length * width;
    cout << "the area of rectangle is " << areaOfrectangle;
}

void tringleArea () {
    double base, height;
    cout << "enter value for the base of a triangle: ";
    cin >> base;

    cout << "enter the value for height of the tringle: ";
    cin>> height;

    double areaOftriangle = 0.5 * base * height;
    cout << "the area of triangle is " << areaOftriangle;
}

int main () {
    
    char userChoice;
    do {
        cout << "please select the area of the shape you want to calcurate area for: " << endl;
        cout << "1. Square" << endl;
        cout << "2. rectangle" << endl;
        cout << "3. triangle" << endl;

        cout << "Enter your choice now: ";
        cin >> userChoice;

        if (userChoice == '1') {
            squareArea ();
        }
        else if (userChoice == '2') {
            rectangleArea ();
        }
        else if (userChoice == '3') {
            tringleArea ();
        }
        else {
            cout << "invalid input, please enter values 1, 2 or 3 to calcurate area of a shape" <<endl; 
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize> :: max(), '\n');

        cout << "\nDo you want to calcurate the area of another shape ? y/n : ";
        cin >> userChoice;
    }
    
    while (toupper(userChoice) == 'y'); {
        cout << "the program has terminated";
    }
    return 0;
}
