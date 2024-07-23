// missing elements from an array with duplicates
#include <iostream>
using namespace std;
#include <vector>

// negative marking method TC- O(n)  SC-O(1)
void missing(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int index = abs(nums[i]);
        if (nums[index - 1] > 0)
        {
            nums[index - 1] *= -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }
}
// ------------------------------------OR-----------------------

// sorting and swaping method


int main()
{
    vector<int> nums = {1, 3, 5, 3, 4};
    missing(nums);

    return 0;
}