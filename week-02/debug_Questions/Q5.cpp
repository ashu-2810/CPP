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
            int temp = f1 + f2;//2-3-5-8-13
            f1 = f2;//1-2-3-5-8
            f2 = temp;//2-3-5-8-13
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
    cout << checkMember(10) << endl;
    return 0;
}
