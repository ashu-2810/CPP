// find duplicate numbers(287. leetcode)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// in-built sort method
int Duplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 3, 4, 4, 2};
    cout << Duplicate(nums) << endl;

    return 0;
}