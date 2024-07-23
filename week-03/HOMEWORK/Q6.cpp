// find duplicate numbers(287. leetcode)
#include <iostream>
#include <vector>
using namespace std;

// in-built sort method TC- O(n logn)  SC- O(n)
#include <algorithm>
int Duplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return nums[i];
        }
    }
    return -1;
}
// ---------------------------OR---------------------------

// negative marking method  TC- O(n)  SC- O(1)
int findDuplicate(vector<int> &nums)
{
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        if (nums[index] < 0)
        {
            return i;
        }
        nums[index] *= -1;
    }
    return ans;
}

// ------------------------------OR-----------------------

// positioning method TC- O(n)  SC-O(1)
int pleaseFindDuplicate(vector<int> &nums)
{
    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}

int main()
{
    vector<int> nums = {1, 3, 2, 4, 2};
    cout << Duplicate(nums) << endl;
    cout << findDuplicate(nums) << endl;
    cout << pleaseFindDuplicate(nums) << endl;

    return 0;
}