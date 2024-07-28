// factorial of a number
#include <iostream>
#include <vector>
using namespace std;

// add two numbers represented by two arrays
#include <algorithm>
string calSum(int *a, int n, int *b, int m)
{
    int carry = 0;
    string ans;
    int i = n - 1;
    int j = m - 1;

    while (i >= 0 && j >= 0)
    {
        int x = a[i] + b[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--, j--;
    }
    while (i >= 0)
    {
        int x = a[i] + 0 + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
    }
    while (j >= 0)
    {
        int x = 0 + b[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        j--;
    }
    if (carry)
    {
        ans.push_back(carry + '0');
    }
    while (ans[ans.size() - 1] == '0')
    {
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> factorial(int nfact)
{
    
}

int main()
{
    // add two numbers represented by two arrays
    int a[] = {1, 2};
    int b[] = {2, 1};
    int n = 2, m = 2;
    string results = calSum(a, n, b, m);
    for (auto i : results)
    {
        cout << i;
    }
    cout << endl;

    int nfact = 10;
    vector<int> result = factorial(nfact);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    cout << endl;

    return 0;
}