// Debug the code. Return true if the number is member of fibonacci series else false.
#include <iostream>
using namespace std;

int checkMember(int n)
{
    int f1 = 1, f2 = 1;
    if (n == 0 || n == 1)
    {
        return true;
    }
    else
    {
        while (1)
        {
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if (temp == n)
            {
                return true;
            }
            else if (temp > n)
            {
                return false;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    cout << checkMember(233) << endl;
    return 0;
}
