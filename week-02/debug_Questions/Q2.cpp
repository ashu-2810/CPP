// Debug the code. Convert Binary to Decimal.
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, factor = 1;
    cin >> n;  // 1010
    while (n != 0)  
    {
        int digit = n % 10; //0-1-0-1
        sum = sum + digit * factor; //0-2-2-10
        factor = 2 * factor; //2-4-8-16
        n = n / 10; //101-10-1-0
    }
    cout << sum;
    return 0;
}