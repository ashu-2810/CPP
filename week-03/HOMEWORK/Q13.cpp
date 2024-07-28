// remove duplicates from sorted array(26. leetcode)
#include <iostream>
#include <vector>
using namespace std;

int duplicate(vector<int> &nums)
{
    int i = 1, j = 0;
    while (i < nums.size())
    {
        if (nums[i] == nums[j])
            i++;
        else
            nums[++j] = nums[i++];
    }
    return j + 1;
}

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << "no of unique elements: " << duplicate(nums) << endl;

    return 0;
}