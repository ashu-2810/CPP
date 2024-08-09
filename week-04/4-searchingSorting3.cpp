#include <iostream>
#include <vector>
using namespace std;

// divide two numbers using binarySearch
int divide(int dividend, int divisor)
{
    int s = 0;
    int e = dividend;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * divisor == dividend)
            return mid;
        else if (mid * divisor < dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// nearly sorted array
int searchNearlySorted(vector<int> arr, int target)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid - 1 >= 0 && arr[mid - 1] == target)
            return mid - 1;
        else if (arr[mid] == target)
            return mid;
        else if (mid + 1 < n && arr[mid + 1] == target)
            return mid + 1;
        else if (target > arr[mid])
            s = mid + 2;
        else
            e = mid - 2;
        mid = s + (e - s) / 2;
    }
    return -1;
}

// find the odd occuring element


int main()
{
    // divide two numbers using binarySearch
    int divisor = 7;
    int dividend = 39;
    int ans = divide(abs(dividend), abs(divisor));
    if (divisor == 0 && (dividend > 0 || dividend < 0))
        ans = -1;
    else if (dividend == 0 && (divisor > 0 || divisor < 0))
        ans = 0;
    else if (divisor > 0 && dividend < 0 || divisor < 0 && dividend > 0)
        ans = 0 - ans;
    cout << ans << endl;

    // nearly sorted array
    vector<int> arr = {20, 10, 30, 50, 40, 70, 60};
    int target = 70;
    cout << searchNearlySorted(arr, target) << endl;

    return 0;
}