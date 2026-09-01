#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle r1(5.0, 3.5);
    cout << "Area of rectangle is: " << r1.area() << endl;
    return 0;
}