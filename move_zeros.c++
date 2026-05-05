#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 0, 2, 3, 0, 4, 5, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (arr[j] == 0)
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = 0;
            }
        }
    }
    for (int k = 0; k < len; k++)
    {
        cout << arr[k] << " ";
    }
}
