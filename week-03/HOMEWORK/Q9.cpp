// common element in 3 sorted array
#include <iostream>
using namespace std;
#include <vector>
#include <set>

vector<int> common(int A[], int n1, int B[], int n2, int C[], int n3)
{
    vector<int> ans;
    set<int> st;
    int i, j, k;
    i = j = k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            // cout << A[i] << " ";
            // ans.push_back(A[i]);
            st.insert(A[i]);
            i++, j++, k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    for (auto i : st)
    {
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6, n2 = 5, n3 = 8;
    vector<int> anss = common(A, n1, B, n2, C, n3);
    cout << anss.size() << endl;
    for (int i = 0; i < anss.size(); i++)
    {
        cout << anss[i] << " ";
    }

    return 0;
}