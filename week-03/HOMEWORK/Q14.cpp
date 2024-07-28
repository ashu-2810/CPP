// maximum average subarray 1 (643. leetcode)
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// method 1 TC- O(n2) SC- O(1)
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

double maxAvgg(vector<int> &nums, int &k)
{
    int i = 0, j = k - 1;
    int sum = 0;
    for (int y = i; y <= j; y++)
    {
        sum += nums[y];
    }
    int maxsum = sum;
    j++;
    while (j < nums.size())
    {
        sum -= nums[i++];
        sum += nums[j++];
        maxsum = max(maxsum, sum);
    }
    double maxavg = maxsum / (double)k;
    return maxavg;
}

int main()
{

    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << "maximum average is: " << maxAvgg(nums, k) << endl;

    return 0;
}