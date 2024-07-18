// find piviot index (724. leetcode)
#include <iostream>
using namespace std;
#include <vector>

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

int main()
{
    vector<int> nums = {1, 7, 3, 5, 6, 5, 6, 4, 1};
    int ans = pivot(nums);
    cout << ans << endl;

    return 0;
}