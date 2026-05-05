#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 35, 67, 4, 32, 87, 35, 67, 4, 45, 89, 87, 35};
    int len = sizeof(arr) / sizeof(arr[0]);
    int count, dup, elment, freq = 0;
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
        if (count > freq)
        {
            freq = count;
            elment = arr[i];
        }
    }
    cout << "Most frequent elment is " << elment << " appearing " << freq << " times" << endl;
}