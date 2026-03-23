
#include <iostream>
using namespace std;

int main()
{
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    int k = 0; // index of unique element

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[k])
        {
            k++;
            nums[k] = nums[i];
        }
    }

    cout << "Unique count = " << k + 1 << endl;

    cout << "Array: ";
    for (int i = 0; i <= k; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}