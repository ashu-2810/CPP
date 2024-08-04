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

// sqrt (69.leetcode)
int mySqrt(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == x)
            return mid;
        else if (mid * mid < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (mid * mid > x)
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}

// sqrt (upto 3 decimal number ans)

// search in a 2D matrix (74. leetcode)
bool searchMatrix(vector<vector<int>> &matrix, int targget)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int totalElements = row * col;
    int s = 0;
    int e = totalElements - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int rowIndex = mid / col;                    // imp 1D -> 2D
        int colIndex = mid % col;                    // imp 1D -> 2D
        int currNumber = matrix[rowIndex][colIndex]; // imp 1D -> 2D
        if (currNumber == targget)
            return true;
        else if (targget > currNumber)
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return false;
}

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

    // sqrt (69.leetcode)
    int x = 68;
    cout << "sqrt of " << x << " is: " << mySqrt(x) << endl;

    // sqrt (upto 3 decimal number ans)

    // search in a 2D matrix (74. leetcode)
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int targget = 11;
    cout << searchMatrix(matrix, targget) << endl;

    return 0;
}