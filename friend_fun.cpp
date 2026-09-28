#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;
    friend int addFive(Distance);

public:
    Distance() : meter(0) {}
};
int addFive(Distance d)
{
    return d.meter + 5;
}
int main()
{
    Distance d;
    cout << "Distance after adding 5 meters: " << addFive(d) << endl;
    return 0;
}