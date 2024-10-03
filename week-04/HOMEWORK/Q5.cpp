// painter's partition problem
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool isPossible(vector<int> &arr, int n, int k, long long int mid)
{
    long long int pagesum = 0;
    long long int counter = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
            return false;
        else if (pagesum + arr[i] > mid)
        {
            counter++;
            pagesum = arr[i];
            if (counter > k)
            {
                return false;
            }
        }
        else
        {
            pagesum += arr[i];
        }
    }
    return true;
}

long long int mintime(vector<int> &arr, int n, int k)
{
    if (k > n)
        return -1;
    long long int start = 0;
    // long long end = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     end += arr[i];
    // }
    // OR
    long long int end = accumulate(arr.begin(), arr.end(), 0);
    long long int ans = -1;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n = 5; // no of board to paint
    int k = 3; // no of painters to paint the board
    vector<int> arr = {5, 10, 30, 20, 15};
    long long int awq = mintime(arr, n, k);
    cout << "minimum time to paint all boards is: " << awq << endl; // output =35;
    return 0;
}