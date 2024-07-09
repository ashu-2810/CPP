#include <iostream>
#include <vector>
using namespace std;

// // printing array
// void fun(int arr[], int n)
// {
//     cout << "array elements are : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// printing vector
void printvector(vector<int> v)
{
    // // method 1
    // for (int i = 0; i < v.size(); i++)
    // {
    //     // cout << v[i] << " ";
    //     cout << v.at(i) << " ";
    // }
    // cout << endl;
    // method 2(for each loop)
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    // // static memory allocation in array
    // int arr[5] = {1, 2, 3, 4, 5};
    // fun(arr, 5);

    // // dynamic memory allocation in array
    // int n;
    // cout << "enter size of array : ";
    // cin >> n;
    // int *brr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     int data;
    //     cin >> data;
    //     brr[i] = data;
    // }
    // fun(brr, n);

    // vector initialization must include vector library before using vector
    vector<int> v;
    vector<int> v1(5, -1); // v1(size of vector , value at each index)
    vector<int> v2 = {1, 2, 3, 4, 5};
    vector<int> v3{1, 2, 3, 4, 5};

    // inserting value in vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // print vector
    printvector(v);

    // deleting value in vector
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    // inserting values in loops
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }
    printvector(v);

    // deleting all values in vector ( clearing vector )
    v.clear();

    // to find the capacity & size of vector
    cout << "v1 : ";
    printvector(v1);
    cout << "v1 capacity : " << v1.capacity() << " " << "v1 size : " << v1.size() << endl;

    // how to copy vector
    vector<int> v4(v3);
    cout << "v4 after coping v3 : ";
    printvector(v4);

    // to get first element or last element in vector
    cout << "v4[0] : " << v4[0] << " v4.front() : " << v4.front() << endl;
    cout << "v4[v4.size() - 1] : " << v4[v4.size() - 1] << " v4.back() : " << v4.back() << endl;

    return 0;
}