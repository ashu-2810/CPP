// missing numbers
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <cmath>
using namespace std;

// TC- O(n log n) SC- O(1)
int missing(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i)
        {
            return i;
        }
    }
    return n;
}
// TC- O(n) SC- O(1)
int missings(vector<int> &nums)
{
    int n = nums.size(), ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= nums[i];
    }
    for (int i = 0; i <= n; i++)
    {
        ans ^= i;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    vector<int> nums = { 0, 1};
    int missingnumber = missings(nums);
    cout << missingnumber << endl;

    return 0;
}
