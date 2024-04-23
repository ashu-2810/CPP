#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    // Q1. implicit casting
    // int to float
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2;
    cout << result << endl;

    // char to int
    char ch = 'A';
    int b = ch + 1;
    cout << b << endl;

    // int to char
    int a = 97;
    char cha = a;
    cout << cha << endl;

    // Q2. Explicit Casting
    // float to int
    int n1 = 10;
    float n2 = 5.5;
    float res1 = n1 + (int)n2;
    cout << res1 << endl;

    // double to int
    double pi = 3.14159265;
    int intpi = (int)pi;
    cout << intpi << endl;

    // float to char
    float floatnum = 65.35;
    char ch2 = (char)floatnum;
    cout << ch2 << endl;

    return 0;
}