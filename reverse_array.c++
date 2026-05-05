#include <iostream>
using namespace std;
int main()
{
    int temp;
    int arr[] = {9, 98, 76, 56, 87, 64, 35, 34, 78};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
    for (int j = 0; j < len; j++)
    {
        cout << arr[j] << ",";
    }
}