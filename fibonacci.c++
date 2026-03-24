#include <iostream>
using namespace std;
int main()
{
    int n, temp, f = 0, m = 1;
    cout << "Enter choice: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        temp = f;
        f = f + m;
        m = temp;
    }
    cout << f;
}