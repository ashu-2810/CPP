#include <iostream>
#include <vector>
using namespace std;

// linear search
bool linearSearch(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
            return true;
    }
    return false;
}

// binary Search
int binarySearch(vector<int> &brr1, int targets)
{
    int i = 0;
    int j = brr1.size() - 1;
    int mid = (i + j) / 2;
    while (i <= j)
    {
        if (brr1[mid] == targets)
        {
            return mid;
        }
        else if (brr1[mid] < targets)
        {
            i = mid + 1;
        }
        else if (brr1[mid] > targets)
        {
            j = mid - 1;
        }
        // mid update
        mid = (i + j) / 2;
    }
    return -1;
}

// find first occurance in an array using binary search
int firstOccurance(vector<int> &arr, int targett)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == targett)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < targett)
        {
            s = mid + 1;
        }
        else if (arr[mid] > targett)
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int main()
{
    // linear search
    vector<int> nums = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 70;
    bool ans = linearSearch(nums, target);
    if (ans)
        cout << "target found.." << endl;
    else
        cout << "target not found.." << endl;

    // binary Search
    vector<int> brr1 = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int targets = 70;
    cout << "target at index: " << binarySearch(brr1, targets) << endl;

    // find first occurance in an array using binary search
    vector<int> arr = {10, 20, 30, 30, 30, 30, 40, 50, 60};
    int targett = 30;
    cout << "first occurance of target at index is: " << firstOccurance(arr, targett) << endl;

    return 0;
}