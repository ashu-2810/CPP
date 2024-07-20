// move all -ve numbers to left side of an array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// in-built sort function
void Sort(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}
// ---------------------------OR-------------------------

// dutch national flag (two pointer)
void Pointer(vector<int> &nums)
{
    int n = nums.size();
    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
        if (nums[l] < 0)
        {
            l++;
        }
        else if (nums[h] > 0)
        {
            h--;
        }
        else
        {
            swap(nums[l], nums[h]);
        }
    }
}

// print array
void print(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, -3, 4, -5, 6};
    Pointer(nums);
    print(nums);

    return 0;
}
