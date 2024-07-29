// linear search
#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
            return true;
    }
    return false;
}

int main()
{
    vector<int> nums = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 70;
    bool ans = linearSearch(nums, target);
    if (ans)
        cout << "target found.." << endl;
    else
        cout << "target not found.." << endl;

    return 0;
}