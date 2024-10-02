// book allocation problem
#include <iostream>
#include <numeric>
using namespace std;

bool ispossible(int A[], int &N, int &M, int mid)
{
    int pagesum = 0;
    int counter = 1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > mid)
        {
            return false;
        }
        else if (pagesum + A[i] > mid)
        {
            counter++;
            pagesum = A[i];
            if (counter > M)
            {
                return false;
            }
        }
        else
        {
            pagesum += A[i];
        }
    }
    return true;
}

int findPages(int A[], int &N, int &M)
{
    if (M > N)
    {
        return -1;
    }
    int start = 0;
    int end = accumulate(A, A + N, 0);
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (ispossible(A, N, M, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int N = 4; // no of books
    int M = 2; // no of students
    int A[] = {12, 34, 67, 90};
    int awq = findPages(A, N, M);
    cout << "minimum no of pages: " << awq << endl;
    return 0;
}