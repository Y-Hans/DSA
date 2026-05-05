#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number";
    cin >> num;
    for (int i = 2; i < sqrt(num) + 1; i++)
    {
        if (num % i == 0)
        {
            cout << "not prime" << endl;
            return 0;
        }
    }
    cout << "Number is prime" << endl;
}