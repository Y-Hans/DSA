#include <iostream>
using namespace std;

int pow(int base, int exponent)
{
    int temp = base;
    for (int i = 0; i < exponent - 1; i++)
    {
        base *= temp;
    }
    return base;
}
int main()
{
    int num, arm = 0, temp, digits = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp > 0)
    {
        arm += pow(temp % 10, digits);
        temp = temp / 10;
    }
    if (arm == num)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
}