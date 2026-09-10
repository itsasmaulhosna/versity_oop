#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 0,
        b = 1,
        next;
    cout << "Enter a terms:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}