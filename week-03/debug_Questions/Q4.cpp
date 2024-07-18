// Debug the code.
#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        temp = arr[i];
        arr[i + 1] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    swapAlternate(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}