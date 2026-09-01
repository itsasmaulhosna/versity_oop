#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float sum = 0, i, n, k;
    cout << "Enter the term";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        k = pow(1 / i, 2);
        sum = sum + k;
    }
    cout << "Sum is:" << sum;
    return 0;
}