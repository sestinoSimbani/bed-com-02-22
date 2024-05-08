#include "area.h"
#include <cmath>
using namespace std;

double area :: squareArea(const shapes :: square& squareObj) {
    double sideLength = squareObj.getSide();
    return sideLength * sideLength;
}

double area :: triangleArea(const shapes :: triangle& triangleObj) {
    double base = triangleObj.getBase();
    double height = triangleObj.getHeight();
    return 0.5 * base * height;
}

double area :: circleArea(const shapes :: circle& circleObj) {
    double radius = circleObj.getRadius();
    return M_PI * radius * radius;
}