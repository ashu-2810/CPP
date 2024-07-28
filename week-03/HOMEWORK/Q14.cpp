// maximum average subarray 1 (643. leetcode)
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

double maxAvg(vector<int> &nums, int k)
{
    int maxsum = INT_MIN;
    int i = 0, j = k - 1;
    while (j < nums.size())
    {
        int sum = 0;
        for (int y = i; y <= j; y++)
        {
            sum += nums[y];
        }
        maxsum = max(maxsum, sum);
        j++, i++;
    }
    double maxavg = maxsum / (double)k;
    return maxavg;
}

int main()
{

    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << "maximum average is: " << maxAvg(nums, k) << endl;

    return 0;
}