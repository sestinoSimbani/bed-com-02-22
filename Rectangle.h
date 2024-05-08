#include <string>

using namespace std;

class Rectangle
{
    private :

    float rectLength;
    float rectWidth;

    public :

    Rectangle(); // constructor
    Rectangle(float length, float width);

    ~Rectangle(); // destructor

    void setLength(float userLength);
    float getLength();

    void setWidth(float userWidth);
    float getWidth();
    
    float rectangleArea();
};