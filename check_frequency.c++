#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 35, 67, 4, 32, 87, 35, 67, 4, 45, 89, 87};
    int len = sizeof(arr) / sizeof(arr[0]);
    int count;
    int dup;
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
        cout << arr[i] << " : " << count << endl;
    }
}