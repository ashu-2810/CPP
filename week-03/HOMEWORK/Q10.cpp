// wave print a matrix
#include <iostream>
#include <vector>
using namespace std;

void wavePrint(vector<vector<int>> v)
{
    int rowSize = v.size();
    int colSize = v[0].size();
    for (int startCol = 0; startCol < colSize; startCol++)
    {
        // even no of col-> top to bottom
        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < rowSize; i++)
            {
                cout << v[i][startCol] << " ";
            }
        }
        else
        {
            // odd no -> bottom to top
            for (int i = rowSize - 1; i >= 0; i--)
            {
                cout << v[i][startCol] << " ";
            }
        }
    }
    cout << endl;
}

// rowWave print
void rowWavePrint(vector<vector<int>> v)
{
    int rowSize = v.size();
    int colSize = v[0].size();
    for (int i = 0; i < colSize; i++)
    {
        // even-> left to right
        if ((i & 1) == 0)
        {
            for (int j = 0; j < colSize; j++)
            {
                cout << v[i][j] << " ";
            }
        }
        // odd-> right to left
        else
        {
            for (int j = colSize - 1; j >= 0; j--)
            {
                cout << v[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    wavePrint(v);
    rowWavePrint(v);

    return 0;
}