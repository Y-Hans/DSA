#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 1, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i; i < len - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            count++;
        }
    }
    if (count > 1)
    {
        cout << "Not rotated";
    }
    else
    {
        cout << "Rotated";
    }
}