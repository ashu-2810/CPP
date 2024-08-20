// find k closest Element(658. leetcode)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// // method 01 sorting based on diff and returning the first k elements(incomplete)
// vector<int> findColsest(vector<int> &arr, int k, int x)
// {
//     vector<int> result;
//     vector<int> anss;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int diff = abs(x - arr[i]);
//         // cout << arr[i] << "-" << diff << endl;
//         result.push_back(diff);
//     }
//     sort(result.begin(), result.end());
//     for (int i = 0; i < k; i++)
//     {
//         anss[i] = result[i];
//     }
//     return anss;
// }

// // method 02 (two pointer approach )
// vector<int> findColsest(vector<int> arr, int k, int x)
// {
//     int l = 0;
//     int h = arr.size() - 1;
//     while (h - l >= k)
//     {
//         if (x - arr[l] > arr[h] - x)
//             l++;
//         else
//             h--;
//     }
//     // vector<int> ans;
//     // for (int i = l; i <= h; i++)
//     //     ans.push_back(arr[i]);
//     // return ans;
//     // ----------------------OR-----------------------------
//     return vector<int>(arr.begin() + l, arr.begin() + h + 1);
// }

// method 03 (binary search)
int lowerBound(vector<int> &arr, int x)
{
    int n = arr.size();
    int s = 0, end = n - 1, ans = end;
    while (s <= end)
    {
        int mid = s + (end - s) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (x > arr[mid])
            s = mid + 1;
        else
            end = mid - 1;
    }
    return ans;
}
vector<int> findColsest(vector<int> &arr, int k, int x)
{
    int h = lowerBound(arr, x);
    int l = h - 1;
    while (k--)
    {
        if (l < 0)
            h++;
        else if (h >= arr.size())
            l--;
        else if (x - arr[l] > arr[h] - x)
            h++;
        else
            l--;
    }
    return vector<int>(arr.begin() + l + 1, arr.begin() + h);
}

int main()
{
    // find k colsest element(658. leetcode)

    // // method 01 sorting based on diff and returning the first k elements(incomplete)
    // vector<int> arr = {1, 2, 3, 4, 5};
    // int k = 4;
    // int x = 3;
    // vector<int> ans = findColsest(arr, k, x);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // // method 02 (two pointer approch)
    // vector<int> arr = {1, 2, 3, 4, 5};
    // int k = 4;
    // int x = 3;
    // vector<int> ans = findColsest(arr, k, x);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // method 03( binary search)
    vector<int> arr = {1, 2, 3, 4, 5};
    // vector<int> arr = {3, 5, 8, 10};
    int k = 4;
    // int k = 2;
    int x = 3;
    // int x = 15;
    vector<int> ans = findColsest(arr, k, x);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}