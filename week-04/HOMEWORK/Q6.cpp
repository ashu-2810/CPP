// Aggressive Cow problem
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool ispossible(vector<int> &stall, int k, int mid)
{
    int c = 1;
    int pos = stall[0];
    for (int i = 1; i < stall.size(); i++)
    {
        if (stall[i] - pos >= mid)
        {
            c++;
            pos = stall[i];
        }
        if (c == k)
        {
            return true;
        }
    }
    return false;
}
int solve(int n, int k, vector<int> &stall)
{
    sort(stall.begin(), stall.end());
    int start = 0;
    int end = stall[stall.size() - 1] - stall[0];
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (ispossible(stall, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    // Aggresive cow problem
    int n = 5; // position of stall
    int k = 3; // no of aggressive cow
    vector<int> stall = {1, 2, 4, 8, 9};
    int awq = solve(n, k, stall);
    cout << "output: " << awq << endl; // output -> 3;

    return 0;
}