// Debug the code. Linear Search.
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int val = 5;
    bool ans = linearSearch(arr, n, val);
    if (ans)
    {
        cout << "found the number" << endl;
    }
    else
    {
        cout << "not found the number" << endl;
    }

    return 0;
}