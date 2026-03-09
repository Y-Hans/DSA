#include <iostream>
using namespace std;

int max_arr(int arr[], int len)
{

    int max = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
}

int main()
{
    int arr[] = {9, 98, 76, 56, 876, 435, 34, 78};
    int len = sizeof(arr) / sizeof(arr[0]);
    max_arr(arr, len);
}