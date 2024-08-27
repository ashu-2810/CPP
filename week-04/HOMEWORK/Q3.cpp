// exponential search(doubling,galloping,strazik search) & unbounded binary search
#include <iostream>
#include <vector>
using namespace std;

// binary search
int bs(vector<int> &arr, int s, int e, int x)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

int expoSearch(vector<int> &arr, int x)
{
    int n = arr.size();
    if (arr[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (i < n && arr[i] <= x)
    {
        i *= 2;
        // i <<= 1;
    }
    return bs(arr, i / 2, min(i, n - 1), x);
}
// find the element in an infinite sorted array
int binarySearch(vector<int> &brr, int s, int e, int &k)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (brr[mid] == k)
            return mid;
        else if (k > brr[mid])
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}
int exponential(vector<int> &brr, int &k)
{
    int i = 0;
    int j = 1;
    while (brr[j] < k)
    {
        i = j;
        j <<= 1;
    }
    return binarySearch(brr, i, j, k);
}

int main()
{
    // exponential search(doubling,galloping,strazik search)&unbounded binary search
    vector<int> arr = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int x = 11;
    int ans = expoSearch(arr, x);
    cout << "exponential binary search is at index: " << ans << endl;

    // find the element in an infinite sorted array
    vector<int> brr = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int k = 4;
    int ae = exponential(brr, k);
    cout << "unbounded binary search of " << k << " is at index: " << ae << endl;

    return 0;
}