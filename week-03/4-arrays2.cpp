#include <iostream>
using namespace std;

// // find unique element in an array using Xor
// int getUnique(int arr[], int &size)
// {
//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         ans ^= arr[i];
//     }
//     return ans;
// }

// // print all pairs of an array
// void printPairs(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             cout << arr[i] << "," << arr[j] << endl;
//         }
//         cout << endl;
//     }
// }

// // print all pairs of an array forming triangle
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = size - 1; j >= i; j--)
//         {
//             cout << arr[i] << "," << arr[j] << endl;
//         }
//         cout << endl;
//     }
// }

// // print all pair sum
// void printSum(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < size; j++)
//         {
//             sum = arr[i] + arr[j];
//             cout << arr[i] << " + " << arr[j] << " = " << sum << endl;
//         }
//         cout << endl;
//     }
// }

// // print all triplets
// void printTriplets(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             for (int k = 0; k < size; k++)
//             {
//                 cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
//             }
//         }
//         cout << endl;
//     }
// }

// // sort 0s & 1s in ascending order using counting approch
// void sortZeroOne(int arr[], int size)
// {
//     int countZero = 0, countOne = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 1)
//         {
//             countOne++;
//         }
//         else if (arr[i] == 0)
//         {
//             countZero++;
//         }
//     }
//     for (int i = 0; i < countZero; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = countZero; i < size; i++)
//     {
//         arr[i] = 1;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// // sort 0s & 1s in ascending order using 2 pointer approch
// void sortZeroOne(int arr[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     while (left <= right)
//     {
//         if (arr[left] == 0)
//         {
//             left++;
//         }
//         else if (arr[right] == 1)
//         {
//             right--;
//         }
//         else
//         {
//             swap(arr[left], arr[right]);
//             left++, right--;
//         }
//     }
// }

// // sort 0s & 1s in ascending order using sort built-in approch
// #include <algorithm>
// void sortZeroOne(int arr[],int size){
//     sort(arr, arr + size);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// // right shift arrays element by 1
// void rightShift(int arr[], int size)
// {
//     int temp = arr[size - 1];
//     for (int i = size - 1; i >= 1; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = temp;
// }

// // left shift arrays element by 1
// void leftShift(int arr[], int size)
// {
//     int temp = arr[0];
//     for (int i = 0; i < size - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     arr[size - 1] = temp;
// }

// // right shift array elements by k times
// void rightShift(int arr[], int size, int k)
// {
//     int ansArr[k];
//     int anssize = k;
//     for (int i = 0; i < anssize; i++)
//     {
//         ansArr[i] = arr[size - k];
//         k--;
//     }
//     for (int i = size - 1; i >= 1; i--)
//     {
//         arr[i] = arr[i - anssize];
//     }
//     for (int i = 0; i < anssize; i++)
//     {
//         arr[i] = ansArr[i];
//     }
//     // printing array
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// // left shift array elements by k times
// void leftShift(int arr[], int size, int k)
// {
//     int ansArr[k];
//     int anssize = k;
//     for (int i = 0; i < anssize; i++)
//     {
//         ansArr[i] = arr[i];
//     }
//     for (int i = 0; i < size - k; i++)
//     {
//         arr[i] = arr[i + k];
//     }
//     for (int i = size - k, j = 0; i < size, j < k; i++, j++)
//     {
//         arr[i] = ansArr[j];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    // // find unique element in an array using Xor
    // int arr[] = {2, 5, 1, 6, 1, 5, 2, 11, 6};
    // int size = 9;
    // int finalAns = getUnique(arr, size);
    // cout << "finalAns : " << finalAns << endl;

    // // print all pairs of an array
    // int arr[] = {10, 20, 30};
    // int size = 3;
    // printPairs(arr, size);

    // // print all pairs of an array forming triangle
    // int arr[] = {10, 20, 30};
    // int size = 3;
    // printArray(arr, size);

    // // print all pair sum
    // int arr[] = {10, 20, 30};
    // int size = 3;
    // printSum(arr, size);

    // // print all triplets
    // int arr[] = {10, 20, 30, 40};
    // int size = 4;
    // printTriplets(arr, size);

    // // sort 0s & 1s in ascending order using counting approch
    // int arr[] = {0, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0};
    // int size = 11;
    // sortZeroOne(arr, size);

    // // sort 0s & 1s in ascending order using 2 pointer approch
    // int arr[] = {1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1};
    // int size = 13;
    // sortZeroOne(arr, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // // sort 0s & 1s in ascending order using sort built-in approch
    // int arr[] = {0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0};
    // int size = 11;
    // sortZeroOne(arr, size);

    // // right shift arrays element by 1
    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // rightShift(arr, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // // left shift arrays element by 1
    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // leftShift(arr, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // // right shift array elements by k times
    //     int arr[] = {10, 20, 30, 40, 50, 60};
    //     int k = 3;
    //     int size = 6;
    //     rightShift(arr, size, k);

    // // left shift array elements by k times
    // int arr[] = {10, 20, 30, 40, 50, 60};
    // int size = 6;
    // int k = 2;
    // leftShift(arr, size, k);

    return 0;
}