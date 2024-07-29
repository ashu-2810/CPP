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
    cout << "target at index: " << binarySearch(brr1, targets);

    return 0;
}