#include "Rectangle.h"

Rectangle :: Rectangle() {
    rectLength = 0.0;
    rectWidth = 0.0;
}

Rectangle :: Rectangle(float length, float width) {
    rectLength = length;
    rectWidth = width;
}

Rectangle :: ~Rectangle() {}


void Rectangle :: setLength(float UserLength) {
    rectLength = UserLength;
}

float Rectangle :: getLength() {
    return rectLength;
}

void Rectangle :: setWidth(float userWidth) {
    rectWidth = userWidth;
}

float Rectangle :: getWidth() {
    return rectWidth;
}

float Rectangle :: rectangleArea() {
    return rectLength * rectWidth;
}