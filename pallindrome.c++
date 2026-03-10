#include <iostream>
using namespace std;

int main()
{
    char arr[] = "morom";
    int len = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = len - 2;
    while (start < end)
    {
        if (arr[start] == arr[end])
        {
            start++;
            end--;
        }
        else
        {
            cout << "Not a palindrome";
            return 0;
        }
    }
    cout << "Palindrome";
    return 0;
}
