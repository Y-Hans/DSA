#include <iostream>
using namespace std;
int main()
{
    int arr[] = {6, 7, 8, 5, 4, 64, 89, 43, 67};
    int len = sizeof(arr) / sizeof(arr[0]);
    int search;
    cout << "Enter a element to search: ";
    cin >> search;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == search)
        {
            cout << i;
            return 0;
        }
    }

    cout << -1;
}