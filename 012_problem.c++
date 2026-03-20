#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 1, 2, 1, 0, 0, 0, 2, 1, 2, 2, 1, 1, 2, 2, 0, 0};
    int arrc[3] = {0, 0, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int count, dup, c = 0;
    for (int i = 0; i < len; i++)
    {
        dup = 0;
        count = 0;
        for (int j = 0; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                if (j < i)
                {
                    dup++;
                    continue;
                }
                count++;
            }
        }
        if (dup > 0)
        {
            continue;
        }
        arrc[arr[i]] = count;
        c++;
    }
    for (int k = 0; k < len; k++)
    {
        if (k < arrc[0])
        {
            arr[k] = 0;
        }
        else if (k < arrc[1] + arrc[0])
        {
            arr[k] = 1;
        }
        else if (k < arrc[2] + arrc[1] + arrc[0])
        {
            arr[k] = 2;
        }
    }
    for (int l = 0; l < len; l++)
    {
        cout << arr[l] << endl;
    }
}