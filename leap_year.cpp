#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a year: ";
    cin >> n;
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
    {
        cout << n << " is a leap year.";
    }
    else
    {
        cout << n << " is not a leap year.";
    }
    return 0;
}