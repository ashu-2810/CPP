#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    float a, b;
    cout << "Enter numbers ";
    cin >> a >> b;
    char op;
    cout << "What operation you want to do: ";
    cin >> op;
    int ans = 0;
    switch (op)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
    default:
        cout << "invalid operator...!" << endl;
        break;
    }
    cout << "ans: " << ans << endl;

    return 0;
}
