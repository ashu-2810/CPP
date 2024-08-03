#include <iostream>
#include <vector>
using namespace std;

// find pivot element( pivot can me the maximum element or minimum element based on requirement)
int pivot(vector<int> &nums)
{
    int n = nums.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
            return s;
        else if (mid + 1 < n && nums[mid] > nums[mid + 1])
            return mid;
        else if (mid - 1 >= 0 && nums[mid] < nums[mid - 1])
            return mid - 1;
        else if (nums[s] > nums[mid])
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    // find pivot element( pivot can me the maximum element or minimum element based on requirement)
    // vector<int> nums = {12, 14, 16, 2, 4, 6, 8, 10} ;
    vector<int> nums = {1, 3};
    cout << "pivot index: " << pivot(nums) << endl;

    // search in sorted and rotated array (33. leetcode)

    return 0;
}