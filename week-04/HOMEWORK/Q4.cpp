// book alocation problem
#include <iostream>
#include <vector>
#include <numeric> // used for accumulate stl function
using namespace std;

bool possible(int v[], int n, int m, int sol)
{
    int pageSum = 0;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > sol)
        {
            return false;
        }
        else if (pageSum + v[i] > sol)
        {
            c++;
            pageSum += v[i];
            if (c > m)
            {
                return false;
            }
        }
        else
        {
            pageSum += v[i];
        }
    }
    return true;
}

int findPages(int v[], int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int s = 0;
    int e = accumulate(v, v + n, 0);
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + (e - s)) >> 1;
        if (possible(v, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    // book allocation problem
    int v[] = {12, 34, 67, 90};
    int n = 4; // no of books to be allocated
    int m = 2; // no of people
    cout << "minimum no of pages allocated to a person is : " << findPages(v, n, m) << endl;

    return 0;
}
