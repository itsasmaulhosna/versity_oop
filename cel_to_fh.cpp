#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float cel, fh;
    cout << "Enter the temperature in Celsius: ";
    cin >> cel;
    fh = (cel * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << fh;
    return 0;
}