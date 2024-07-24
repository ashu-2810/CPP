// findd first repeating elements (gfg)
#include <iostream>
using namespace std;

// TC-O(n2)  SC-O(1)
int findRepeated(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return i + 1;
            }
        }
    }
    return -1;
}
// ------------------------------OR---------------------------

// hashing method TC-O(n)  SC- O(n)
#include <unordered_map>
int Repeated(int arr[], int n)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    // int arr[] = {1, 2, 3, 4};
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << "index of first repeated element on 1 based indexing : " << findRepeated(arr, n) << endl;
    cout << "index of first repeated element on 1 based indexing : " << Repeated(arr, n) << endl;

    return 0;
}