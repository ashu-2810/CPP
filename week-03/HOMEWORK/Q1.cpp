// key pair or Two sum
#include <iostream>
using namespace std;

// bool keypair(int arr[], int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == x)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// -----------------------OR-----------------------
// two pointer approach
#include <algorithm>
bool keypair(int arr[], int n, int x)
{
    sort(arr, arr + n);
    int start = 0, end = n - 1, currsum;
    while (start < end)
    {
        currsum = arr[start] + arr[end];
        if (currsum == x)
        {
            return true;
        }
        else if (currsum > x)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    int x = 16;
    int n = 6;
    int ans = keypair(arr, n, x);
    if (ans)
    {
        cout << "contains" << endl;
    }
    else
    {
        cout << "doesn't contains" << endl;
    }

    return 0;
}
