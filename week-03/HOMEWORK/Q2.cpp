// find piviot index (724. leetcode)
#include <iostream>
using namespace std;
#include <vector>

// tc- O(n2) sc- O(1)
int pivot(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int lsum = 0, rsum = 0;
        for (int j = 0; j < i; j++)
        {
            lsum += nums[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            rsum += nums[j];
        }
        if (lsum == rsum)
        {
            return i;
        }
    }
    return -1;
}

// tc- O(n) sc-O(n)
int pivots(vector<int> &nums)
{
    int n = nums.size();
    vector<int> lsum(n, 0);
    vector<int> rsum(n, 0);

    for (int i = 1; i < n; i++)
    {
        lsum[i] = lsum[i - 1] + nums[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rsum[i] = rsum[i + 1] + nums[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        if (lsum[i] == rsum[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int ans = pivots(nums);
    cout << ans << endl;

    return 0;
}