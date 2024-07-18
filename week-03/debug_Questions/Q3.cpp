// Debug the code. Your task is to populate the array using the integer values in the range 1 to N (both inclusive) in the order - 1,3,5,.......,6,4,2.
#include <iostream>
using namespace std;

void populate(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i = i + 2)
    {
        arr[n - j] = i;
        arr[j] = i + 1;
        j++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = 15;
    populate(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}