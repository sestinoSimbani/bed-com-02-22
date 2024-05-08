#include "square.h"
#include "triangle.h"
#include "circle.h"

using namespace shapes;

class area {
    public :

    static double squareArea(const square& squareObj );
    static double triangleArea(const triangle& tringleObj);
    static double circleArea(const circle& circleObj);
};