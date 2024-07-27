// spiral print a matrix (54.leetcode)
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> &v)
{
    vector<int> ans;
    int rows = v.size();
    int cols = v[0].size();
    int totalElements = rows * cols;

    int startrow = 0;
    int endcol = cols - 1;
    int endrow = rows - 1;
    int startcol = 0;

    int count = 0;
    while (count < totalElements)
    {
        // print startrow
        for (int i = startcol; i <= endcol && count < totalElements; i++)
        {
            ans.push_back(v[startrow][i]);
            count++;
        }
        startrow++;
        // print endcol
        for (int i = startrow; i <= endrow && count < totalElements; i++)
        {
            ans.push_back(v[i][endcol]);
            count++;
        }
        endcol--;
        // print endrow
        for (int i = endcol; i >= startcol && count < totalElements; i--)
        {
            ans.push_back(v[endrow][i]);
            count++;
        }
        endrow--;
        // print startcol
        for (int i = endrow; i >= startrow && count < totalElements; i--)
        {
            ans.push_back(v[i][startcol]);
            count++;
        }
        startcol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> vAns = spiralPrint(v);
    for (int i = 0; i < vAns.size(); i++)
    {
        cout << vAns[i] << " ";
    }
    cout << endl;

    return 0;
}