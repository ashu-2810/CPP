// 2D ARRAY
#include <iostream>
#include <vector>
using namespace std;

// // printing 2D array row wise
// void printToDrow(int arr1[][4], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr1[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// // printing 2D array col wise
// void printToDcol(int arr1[][4], int row, int col)
// {
//     for (int i = 0; i < col; i++)
//     {
//         for (int j = 0; j < row; j++)
//         {
//             cout << arr1[j][i] << " ";
//         }
//         cout << endl;
//     }
// }

// // printing after taking input in 2D array
// void printarr2(int arr2[][3], int arr2row, int arr2col)
// {
//     for (int i = 0; i < arr2row; i++)
//     {
//         for (int j = 0; j < arr2col; j++)
//         {
//             cout << arr2[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// // linear searching in 2D array
// bool linearSearch(int arr[][3], int row, int col, int target)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 cout << "row: " << i << " col: " << j << endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// // max in an 2D array
// #include <limits.h>
// int maxInToD(int arr[][3], int row, int col)
// {
//     int maxans = INT_MIN;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] > maxans)
//             {
//                 maxans = arr[i][j];
//             }
//         }
//     }
//     return maxans;
// }

// // min in an 2D array
// #include <limits.h>
// int minInToD(int arr[][3], int row, int col)
// {
//     int minans = INT_MAX;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] < minans)
//             {
//                 minans = arr[i][j];
//             }
//         }
//     }
//     return minans;
// }

// // row wise sum
// void printRowSum(int arr[][4], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             sum = arr[i][j] + sum;
//         }
//         cout << "row " << i << ": " << sum << endl;
//     }
// }

// // col wise sum
// void printColSum(int arr[][4], int row, int col)
// {
//     for (int i = 0; i < col; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < row; j++)
//         {
//             sum = arr[j][i] + sum;
//         }
//         cout << "col " << i << ": " << sum << endl;
//     }
// }

// // diagonal wise sum 00 11 22 ....
// int diagonalsum(int arr[][3], int row, int col)
// {
//     int sum = 0;
//     for (int i = 0; i < row; i++)
//     {
//         sum += arr[i][i];
//     }
//     return sum;
// }

// // reverse diagonal sum 30 21 12 03
// int reversediagonalsum(int arr[][3], int row, int col)
// {
//     int sum = 0;
//     for (int i = row - 1, j = 0; i >= 0, j < col; i--, j++)
//     {
//         sum += arr[i][j];
//     }
//     return sum;
// }

// // transpose of 2d array
// void printarray(int arr[3][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// void transposearray(int arr[][3], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = i; j < col; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
//     cout << endl;
// }

// 2D vector

int main()
{
    // // 2D Creation
    // int arr[5][10];

    // // 2D Initialization
    // int arr1[2][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}};

    // // 2D accessing
    // cout << "arr1[0][0]: " << arr1[0][0] << endl;
    // cout << "arr1[0][1]: " << arr1[0][1] << endl;
    // cout << "arr1[0][2]: " << arr1[0][2] << endl;
    // cout << "arr1[0][3]: " << arr1[0][3] << endl;
    // cout << "arr1[1][0]: " << arr1[1][0] << endl;
    // cout << "arr1[1][1]: " << arr1[1][1] << endl;
    // cout << "arr1[1][2]: " << arr1[1][2] << endl;
    // cout << "arr1[1][3]: " << arr1[1][3] << endl;

    // // printing 2D array
    // int row = 2;
    // int col = 4;

    // // printing 2D array row wise
    // printToDrow(arr1, row, col);

    // // printing 2D array col wise
    // printToDcol(arr1, row, col);

    // // taking input in 2D array
    // int arr2[2][3];
    // int arr2row = 2, arr2col = 3;
    // for (int i = 0; i < arr2row; i++)
    // {
    //     for (int j = 0; j < arr2col; j++)
    //     {
    //         cin >> arr2[i][j];
    //     }
    // }
    // printarr2(arr2, arr2row, arr2col);

    // // linear searching in 2D array
    // int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    // int target = 40;
    // int row = 3, col = 3;
    // bool ans = linearSearch(arr, row, col, target);
    // if (ans)
    // {
    //     cout << "found" << endl;
    // }
    // else
    // {
    //     cout << "not found" << endl;
    // }

    // // max & min in an 2D array
    // int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // int row = 2, col = 3;
    // cout << "max in 2D array: " << maxInToD(arr, row, col) << endl;
    // cout << "min in 2D array: " << minInToD(arr, row, col) << endl;

    // // row wise & col wise sum
    // int arr[3][4] = {{1, 2, 3, 4}, {1, 3, 5, 7}, {2, 4, 6, 8}};
    // int row = 3, col = 4;
    // printRowSum(arr, row, col);
    // printColSum(arr, row, col);

    // // diagonal wise sum 00 11 22 ....
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3, col = 3;
    // cout << "diagonal sum is: " << diagonalsum(arr, row, col);

    // // reverse diagonal sum 30 21 12 03
    // int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3, col = 3;
    // cout << "reverse diagonal sum: " << reversediagonalsum(arr, row, col) << endl;

    // // transpose of 2d array
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int row = 3, col = 3;
    // printarray(arr, row, col);
    // transposearray(arr, row, col);
    // printarray(arr, row, col);

    // 2D vector mail id (lovebabbar3@gmail.com)

    // initialization
    vector<vector<int>> arr1;
    vector<vector<int>> arr(5, vector<int>(10, 0));

    // // printing 2D vector
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // jagged array
    vector<vector<int>> brr;

    vector<int> vec1(10, 0);
    vector<int> vec2(8, 1);
    vector<int> vec3(6, 0);
    vector<int> vec4(3, 1);
    vector<int> vec5(15, 0);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}