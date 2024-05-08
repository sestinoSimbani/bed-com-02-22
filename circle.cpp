#include "circle.h"

using namespace shapes;

circle :: circle() {
    radius = 0.0;
}

circle :: circle(double circRadius) {
    radius = circRadius;
}

circle :: ~circle() {}

void circle :: setRadius(double circRadius) {
    radius = circRadius;
}

double circle :: getRadius() {
    return radius;
}