// k diff in an array(532. leetcode)
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
// method 01  brute force method (T.C  O(n2)   S.C  O(1) )
int bruteKdiff(vector<int> &nums, int k)
{   
    set<pair<int, int>> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(nums[i] - nums[j]) == k)
                ans.insert({nums[i], nums[j]});
        }
    }
    return ans.size();
}

// method 02  two pointer method 
int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    int i = 0, j = 1;
    while (j < nums.size())
    {
        int diff = nums[j] - nums[i];
        if (diff == k)
        {
            ans.insert({nums[i], nums[j]});
            ++i, ++j;
        }
        else if (diff > k)
            i++;
        else
            j++;
        if (i == j)
            j++;
    }
    return ans.size();
}

// method 03  binary Search method  T.C  n(logn) S.C  O(1)
int bs(vector<int> &nums, int start, int x)
{
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == x)
            return mid;
        else if (x>nums[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int binaryKdiff(vector<int> &nums, int k)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        if(bs(nums,i+1,nums[i]+k)!=-1)
            ans.insert({nums[i], nums[i] + k});
    }
    return ans.size();
}
int main()
{
    // k diff in an array(532. leetcode)
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;
    cout << "method 01 brute force method: " << bruteKdiff(nums, k) << endl;
    cout << "method 02 two Pointer method: " << findPairs(nums, k) << endl;
    cout << "method 03 binary Search method: " << binaryKdiff(nums, k) << endl;

    return 0;
}