#include <iostream>
#include <vector>
using namespace std;

// // sort negative and positive in array
// void sortNegativePositive(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     while (left <= right)
//     {
//         if (arr[left] < 0 && left < right)
//         {
//             left++;
//         }
//         else if (arr[right] > 0 && left < right)
//         {
//             right--;
//         }
//         else
//         {
//             swap(arr[left], arr[right]);
//             left++, right--;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// // sort colors (75. leetcode)
// void sortColor(vector<int> &nums)
// {
//     int start = 0;
//     int index = 0;
//     int end = nums.size() - 1;
//     while (index <= end)
//     {
//         if (nums[index] == 0)
//         {
//             swap(nums[index], nums[start]);
//             start++, index++;
//         }
//         else if (nums[index] == 2)
//         {
//             swap(nums[index], nums[end]);
//             end--;
//         }
//         else
//         {
//             index++;
//         }
//     }
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << " ";
//     }
//     cout << endl;
// }

// // rotate array (189. leetcode)
// #include <algorithm>
// void rotate(vector<int> &nums, int k)
// {
//     // ---------------------1ST APPROACH-------------------------------
//     // int temp;
//     // while (k > 0)
//     // {
//     //     temp = nums[nums.size() - 1];
//     //     for (int i = nums.size() - 1; i > 0; i--)
//     //     {
//     //         nums[i] = nums[i - 1];
//     //     }
//     //     nums[0] = temp;
//     //     k--;
//     // }
//     // ----------------------2ND APPROACH-------------------------------
//     // vector<int> ans(nums.size());
//     // for (int i = 0; i < nums.size(); i++)
//     // {
//     // int newIndex = (i + k) % nums.size();
//     // ans[newIndex] = nums[i];
//     // }
//     // nums = ans;
//     // ----------------------3RD APPROACH--------------------------------
//     //  first add #include<algorithm> to use reverse in-built function
//     int n = nums.size();
//     k = k % n;
//     reverse(nums.begin(), nums.end());
//     reverse(nums.begin(), nums.begin() + k);
//     reverse(nums.begin() + k, nums.end());
// }

// // missing number(268. leetcode)
// int missingNumber(vector<int> &nums)
// {
//     int n = nums.size();
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += nums[i];
//     }
//     int totalSum = ((n) * (n + 1)) / 2;
//     int ans = totalSum - sum;
//     return ans;
// }

// // rearrange array elements by sign(2149. leetcode) (H.W.)
// vector<int> rearrangeArray(vector<int> &nums)
// {
//     // // method-1 (temp array)
//     // vector<int> pos, neg, ans;
//     // int n = nums.size();
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (nums[i] > 0)
//     //     {
//     //         pos.push_back(nums[i]);
//     //     }
//     //     else
//     //     {
//     //         neg.push_back(nums[i]);
//     //     }
//     // }
//     // for (int i = 0; i < n / 2; i++)
//     // {
//     //     ans.push_back(pos[i]);
//     //     ans.push_back(neg[i]);
//     // }
//     // return ans;
//     // method 2 (2 pointer)
//     vector<int> ans(nums.size(), -1);
//     int odd = 1, even = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] > 0)
//         {
//             ans[even] = nums[i];
//             even += 2;
//         }
//         else
//         {
//             ans[odd] = nums[i];
//             odd += 2;
//         }
//     }
//     return ans; 
// }

// // row with maximum ones(2643. leetcode)
// vector<int> rowAndMaxOnes(vector<vector<int>> &mat)
// {
//     vector<int> ans;
//     int n = mat.size();
//     int onecount = INT_MIN;
//     int rowNo = -1;
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < mat[i].size(); j++)
//         {
//             if (mat[i][j] == 1)
//             {
//                 count++;
//             }
//         }
//         if (count > onecount)
//         {
//             onecount = count;
//             rowNo = i;
//         }
//     }
//     ans.push_back(rowNo);
//     ans.push_back(onecount);
//     return ans;
// }

// // rotate image(48. leetcode)
// #include <algorithm>
// void rotate(vector<vector<int>> &mat)
// {
//     int n = mat.size();
//     // transpose
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < mat[i].size(); j++)
//         {
//             swap(mat[i][j], mat[j][i]);
//         }
//     }
//     // reverse
//     for (int i = 0; i < n; i++)
//     {
//         reverse(mat[i].begin(), mat[i].end());
//     }
// }

int main()
{
    // // sort negative and positive in array
    // int arr[] = {23, -7, 12, -10, -11, 40, 60};
    // int size = 7;
    // sortNegativePositive(arr, size);

    // // sort colors (75. leetcode)
    // vector<int> nums = {2, 0, 2, 1, 1, 0};
    // sortColor(nums);

    // // rotate array (189. leetcode)
    // vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    // int k = 3;
    // rotate(nums, k);
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }

    // // missing number(268. leetcode)
    // vector<int> nums = {1, 4, 2, 6, 3, 7, 0};
    // int missingNum = missingNumber(nums);
    // cout << "missing number in array is: " << missingNum << endl;

    // // rearrange array elements by sign(2149. leetcode) (H.W.)
    // vector<int> nums = {3, 1, -2, -5, 2, -4};
    // vector<int> result = rearrangeArray(nums);
    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }
    // cout << endl;

    // // row with maximum ones(2643. leetcode)
    // vector<vector<int>> mat;
    // vector<int> vec1 = {0, 1, 1};
    // vector<int> vec2 = {1, 0, 0};
    // vector<int> vec3 = {1, 1, 1};
    // mat.push_back(vec1);
    // mat.push_back(vec2);
    // mat.push_back(vec3);
    // vector<int> mai = rowAndMaxOnes(mat);
    // for (int i = 0; i < mai.size(); i++)
    // {
    //     cout << mai[i] << " ";
    // }

    // // rotate image(48. leetcode)
    // vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // rotate(mat);
    // for (int i = 0; i < mat.size(); i++)
    // {
    //     for (int j = 0; j < mat[i].size(); j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}