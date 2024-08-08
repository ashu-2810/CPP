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

int main()
{
    // divide two numbers using binarySearch
    int divisor = 7;
    int dividend = 39;
    int ans = divide(abs(dividend), abs(divisor));
    if (divisor == 0 && (dividend > 0 || dividend < 0))
    {
        ans = -1;
    }
    else if (dividend == 0 && (divisor > 0 || divisor < 0))
        ans = 0;
    else if (divisor > 0 && dividend < 0 || divisor < 0 && dividend > 0)
        ans = 0 - ans;
    cout << ans << endl;

    return 0;
}