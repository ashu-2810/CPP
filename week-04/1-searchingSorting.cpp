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
int firstOccurance(vector<int> arr, int targett)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
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
        mid = s + (e - s) / 2;
    }
    return ans;
}

// find last occurance of a number in a sorted array
int lastOccurance(vector<int> arr2, int targeet)
{
    int s = 0, e = arr2.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr2[mid] == targeet)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr2[mid] < targeet)
        {
            s = mid + 1;
        }
        else if (arr2[mid] > targeet)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// total occurance of a number in an array
int totalOccurance(vector<int> totalOcc, int ttargets)
{
    int first = firstOccurance(totalOcc, ttargets);
    int last = lastOccurance(totalOcc, ttargets);
    int ans = last - first + 1;
    return ans;
}

// find the missing elements in an array
int findmissingElement(vector<int> missing)
{
    int n = missing.size();
    int ans = -1;
    int i = 0;
    int j = n - 1;
    int mid = i + (j - i) / 2;
    while (i <= j)
    {
        int diff = missing[mid] - mid;
        if (diff == 1)
        {
            i = mid + 1;
        }
        else
        {
            ans = mid;
            j = mid - 1;
        }
        mid = i + (j - i) / 2;
    }
    // how cna we remove this, by modifiying the above logic
    if (ans + 1 == 0)
    {
        return n + 1;
    }
    return ans + 1;
}

// peak index in a mountain array(852.leetcode)
int peakMountain(vector<int> &peak)
{
    int n = peak.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s < e)
    {
        if (peak[mid] < peak[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            ans = mid;
            e = mid;
        }
        mid = s + (e - s) / 2;
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

    // find last occurance of a number in a sorted array
    vector<int> arr2 = {10, 20, 30, 30, 30, 30, 40, 50, 60};
    int targeet = 30;
    cout << "index of targeet of last occurance is: " << lastOccurance(arr2, targeet) << endl;

    // total occurance of a number in a sorted array
    vector<int> totalOcc = {10, 20, 30, 30, 30, 30, 40, 50, 60};
    int ttargets = 30;
    cout << "total occurance is: " << totalOccurance(totalOcc, ttargets) << endl;

    // find the missing elements in an array
    vector<int> missing{1, 2, 3, 4, 5, 6, 7, 8};
    cout << "missing element is: " << findmissingElement(missing) << endl;

    // peak index in a mountain array(852.leetcode)
    vector<int> peak = {10, 20, 50, 40, 30};
    cout << "peak index in mountain array: " << peakMountain(peak) << endl;

    return 0;
}