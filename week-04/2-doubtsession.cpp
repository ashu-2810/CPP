#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// rotate an array (interviewer need this solution)
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main()
{
    // rotate an array (interviewer need this solution)
    vector<int> nums = {-1, -100, 3, 99};
    int k = 2;
    rotate(nums, k);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}