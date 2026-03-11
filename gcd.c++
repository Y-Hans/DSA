#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    if (b == 0 || b == 1)
    {
        cout << "GCD = 1" << endl;
    }
    else
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        cout << "GCD = " << a << endl;
    }
}