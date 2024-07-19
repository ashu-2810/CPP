// sort colors(75. leetcode) without stl
#include <iostream>
#include <vector>
using namespace std;
void sortColor(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, m = 0, h = n - 1;
    while (m <= h)
    {
        if (nums[m] == 0)
        {
            swap(nums[m], nums[l]);
            l++, m++;
        }
        else if (nums[m] == 1)
        {
            m++;
        }
        else
        {
            swap(nums[m], nums[h]);
            h--;
        }
    }
}
int main()
{
    // vector<int> nums = {2, 0, 2, 1, 1, 0};
    vector<int> nums = {2, 0, 1};
    sortColor(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}