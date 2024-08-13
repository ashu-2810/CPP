#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
bool mycomp(int &a, int &b)
{
    // return a < b;//for increasing order
    return a > b; // for decreasing order
}

void prints(vector<vector<int>> &vv)
{
    for (int i = 0; i < vv.size(); i++)
    {
        vector<int> &temp = vv[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
}

bool mycompfor1stIndex(vector<int> &a, vector<int> &b)
{
    // return a[0] < b[0];// default sorting 0 based sorting  increasing order
    // return a[0] > b[0];// 0 based sorting  decreasing order
    // return a[1] < b[1]; // 1st index based sorting  increasing order
    return a[1] > b[1]; // 1st index based sorting  decreasing order
}

int main()
{
    vector<int> v = {44, 33, 55, 22, 11};
    cout << "v: ";
    print(v);
    sort(v.begin(), v.end());
    cout << "increasing order: ";
    print(v);
    sort(v.begin(), v.end(), mycomp);
    cout << "decreasing order: ";
    print(v);

    vector<vector<int>> vv;
    int n;
    cout << "Enter size: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cout << "enter a b: " << endl;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        vv.push_back(temp);
    }
    cout << "here are values: " << endl;
    prints(vv);
    cout << "sorted by 0 index: " << endl;
    sort(vv.begin(), vv.end());
    prints(vv);
    cout << "sorted by 1st index: " << endl;
    sort(vv.begin(), vv.end(), mycompfor1stIndex);
    prints(vv);

    return 0;
}