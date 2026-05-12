#include <iostream>
using namespace std;
int arr[] = {1, 2, 3, 5, 6, 7, 8, 9, 10, 0};
int n = sizeof(arr) / sizeof(arr[0]);

int main()
{
    int sumo = n * (n + 1) / 2;
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += arr[i];
    }
    cout << sumo - suma;
}