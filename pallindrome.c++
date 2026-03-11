#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;
    int rev, org, digit;
    rev = 0;
    org = num;
    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    if (org == rev)
    {
        cout << "pallimdroome" << endl;
    }
    else
    {
        cout << "Not pallindrome" << endl;
    }
}
