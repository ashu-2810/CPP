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

// search in sorted and rotated array (33. leetcode)
int pivotElement(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
            return s;
        else if (mid + 1 < n && arr[mid] > arr[mid + 1])
            return mid;
        else if (mid - 1 >= 0 && arr[mid] < arr[mid - 1])
            return mid - 1;
        else if (arr[s] > arr[mid])
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}
int binarySearch(vector<int> arr, int s, int e, int target)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            s = mid + 1;
        else if (target < arr[mid])
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}
int search(vector<int> arr, int target)
{
    int n = arr.size();
    int ans = -1;
    int pivotIndex = pivotElement(arr);
    if (target >= arr[0] && target <= arr[pivotIndex])
        ans = binarySearch(arr, 0, pivotIndex, target);
    else if (target >= arr[pivotIndex + 1] && target <= arr[n - 1])
        ans = binarySearch(arr, pivotIndex + 1, n - 1, target);
    return ans;
}

//
int main()
{
    // find pivot element( pivot can me the maximum element or minimum element based on requirement)
    // vector<int> nums = {12, 14, 16, 2, 4, 6, 8, 10} ;
    vector<int> nums = {1, 3};
    cout << "pivot index: " << pivot(nums) << endl;

    // search in sorted and rotated array (33. leetcode)
    // vector<int> arr = {12, 14, 16, 2, 4, 6, 8, 10};
    vector<int> arr = {1, 3};
    int target = 3;
    cout << "search in sorted and rotated array: " << search(arr, target) << endl;

    return 0;
}