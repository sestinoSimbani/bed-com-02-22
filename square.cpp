#include "square.h"

using namespace shapes;

square::square() {
    sideLength = 0.0; // Initialize sideLength in the constructor
}

square::square(double length) {
    sideLength = length; // Initialize sideLength with the provided length
}

square::~square() {}

void square::setSide(double length) {
    sideLength = length; // Update the sideLength
}

double square::getSide() const {
    return sideLength; // Return the sideLength without modifying the object
}
