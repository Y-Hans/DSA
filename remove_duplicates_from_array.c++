#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    int newLen = j + 1;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLen; i++)
        cout << arr[i] << " "; // Output: 1 2 3 4 5

    return 0;
}