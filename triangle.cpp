#include "triangle.h"

using namespace shapes;

triangle :: triangle() {
    double base = 0.0;
    double height = 0.0;
}

triangle :: triangle(double triBase, double triHeight) {
    double base = triBase;
    double height = triHeight;
}

triangle :: ~triangle() {}

void triangle :: setBase(double triBase) {
    base = triBase;
}

double triangle :: getBase() {
    return base;
}

void triangle :: setHeight(double triHeight) {
    height = triHeight;
}

double triangle :: getHeight() {
    return height;
}