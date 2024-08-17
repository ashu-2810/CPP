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

// method 02
vector<int> findColsest(vector<int> arr, int k, int x)
{
    vector<int> ans;
    return ans;
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

    // method 02
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;
    vector<int> ans = findColsest(arr, k, x);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}