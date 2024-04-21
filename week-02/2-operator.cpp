#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 2, b = 3;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (~5) << endl;
    cout << !5 << endl;
    cout << (5 ^ 5) << endl;
    cout << (5 << 1) << endl;
    cout << (5 >> 1) << endl;
    cout << (++a) << endl;
    b = 10;
    cout << (++b) * (b++) << endl;
    // 2-important keywords (break, continue)
    // break
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            break;
        }
        else
        {
            cout << i << endl;
        }
    }
    // continue
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}