#include <iostream>
using namespace std;

// // print array using function
// void printarray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// // linear search using function
// bool linearSearch(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// // count zeros and ones in an array
// void countZeroOne(int arr[], int size)
// {
//     int zerocount = 0;
//     int onecount = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 1)
//         {
//             onecount++;
//         }
//         else if(arr[i] == 0)
//         {
//             zerocount++;
//         }
//     }
//     cout << "zeroCount : " << zerocount << endl;
//     cout << "oneCount : " << onecount << endl;
// }

// // minimum no in an array
// #include <limits.h>
// int findMinInArray(int arr[], int size)
// {
//     int minAns = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < minAns)
//         {
//             minAns = arr[i];
//         }
//     }
//     return minAns;
// }

// // reverse an array using swap built-in function
// void printreversearray(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     // // for loop
//     // for (int left = 0; left <= right; left++, right--)
//     // {
//     //     swap(arr[left], arr[right]);
//     // }
//     // while loop
//     while (left <= right)
//     {
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// // extreme print in an array
// void printExtremeArray(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     while (left <= right)
//     {
//         if (left == right)
//         {
//             cout << arr[left] << " ";
//         }
//         else
//         {
//             cout << arr[left] << " " << arr[right] << " ";
//         }
//         left++, right--;
//     }
// }

// // max in an array
// #include <limits.h>
// int maxInArray(int arr[], int size)
// {
//     int maxAns = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > maxAns)
//         {
//             maxAns = arr[i];
//         }
//     }
//     return maxAns;
// }

// // reverse array using temp variable
// void reverseArray(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     int temp = 0;
//     while (left <= right)
//     {
//         temp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = temp;
//         left++, right--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// // reverse array using xor operator
// void reverseArray(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     while (left <= right)
//     {
//         arr[left] ^= arr[right];
//         arr[right] ^= arr[left];
//         arr[left] ^= arr[right];
//         left++, right--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// // reverse array using + - operator
// void reverseArray(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     while (left <= right)
//     {
//         arr[left] = arr[left] + arr[right];
//         arr[right] = arr[left] - arr[right];
//         arr[left] = arr[left] - arr[right];
//         left++, right--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

int main(int argc, char const *argv[])
{
    // // 10 size array, take input in array, double-up each value of that array
    // int arr[10];
    // int n = 10;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] *= 2;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << "\t";
    // }

    // // 5 size array, take input in array, total sum print
    // int arr[5];
    // int n = 5, sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }
    // cout << "sum of all ues in array is : " << sum << endl;

    // // linear search in array
    // int arr[6] = {2, 4, 6, 8, 10, 12};
    // int target = 10;
    // bool flag = 0;
    // int n = 6;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == target)
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag)
    // {
    //     cout << "target found" << endl;
    // }
    // else
    // {
    //     cout << "target not found" << endl;
    // }

    // // print array using function
    // int arr[6] = {2, 4, 6, 8, 10, 12};
    // int size = 6;
    // printarray(arr, size);

    // // linear search using function
    // int arr[6] = {2, 4, 6, 8, 10, 12};
    // int size = 6;
    // int target = 10;
    // bool ans = linearSearch(arr, size, target);
    // if (ans)
    // {
    //     cout << "Target found" << endl;
    // }
    // else
    // {
    //     cout << "Target not found" << endl;
    // }

    // // count zeros and ones in an array
    // int arr[] = {1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0};
    // int size = 15;
    // countZeroOne(arr, size);

    // // minimum no in an array
    // int arr[] = {2, 5, 8, 4, 5, 1, 9, 3, 7};
    // int size = 9;
    // cout << "minimum no in array : " << findMinInArray(arr, size) << endl;

    // // reverse an array
    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // printreversearray(arr, size);

    // // extreme print in an array
    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // printExtremeArray(arr, size);

    // // max in an array
    // int arr[] = {2, 10, 22, 13, 5, 3, 7, 60, 31};
    // int size = 9;
    // cout << maxInArray(arr, size) << endl;

    // // reverse array using temp variable
    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // reverseArray(arr, size);

    // // reverse array using xor operator
    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // reverseArray(arr, size);

    // // reverse array using + - operator
    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // reverseArray(arr, size);

    return 0;
}
