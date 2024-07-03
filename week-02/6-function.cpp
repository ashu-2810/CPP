#include <iostream>
using namespace std;

// // add two numbers
// int sum(int num1, int num2)
// {
//     return (num1 + num2);
// }

// // write a function to print sum of three numbers
// int threeSum(int n1, int n2, int n3)
// {
//     return (n1 + n2 + n3);
// }

// // write a function to print sum of three numbers
// void threeNumberSum(int n1, int n2, int n3)
// {
//     cout << "sum of three no is : " << n1 + n2 + n3 << endl;
// }

// // find max of three numbers
// int maxOfThreeNumbers(int n1, int n2, int n3)
// {
//     int ans1 = max(n1, n2);
//     int ans2 = max(ans1, n3);
//     return ans2;
// }

// // counting from 1 to n
// void counting_1_to_N(int number)
// {
//     for (int i = 1; i <= number; i++)
//     {
//         cout << i << "\t";
//     }
// }

// // check even or odd
// void check_even_odd(int n)
// {
//     if (n % 2 == 0)
//     {
//         cout << "modulo even" << endl;
//     }
//     else
//     {
//         cout << "modulo odd" << endl;
//     }
// }
// void bitwise_even_odd(int n)
// {
//     if ((n & 1) == 0)
//     {
//         cout << "bitwise even" << endl;
//     }
//     else
//     {
//         cout << "bitwise Odd" << endl;
//     }
// }

// // sum of all numbers from 1 to n
// int sum_Till_n(int n)
// {
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// // sum of all even numbers from 1 to n
// int calculate_even_sum(int num)
// {
//     int sum = 0;
//     for (int i = 0; i <= num; i++)
//     {
//         if ((i & 1) == 0)
//         {
//             sum += i;
//         }
//     }
//     return sum;
// }

// // check prime or not
// bool check_prime(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// HW

// // function to display area of circle
// float area_of_circle(float r)
// {
//     return (3.14 * r * r);
// }

// // fuction to find factorial
// long long int factorial(long long int n)
// {
//     long long int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

// // check prime or not using sqrt in-built function
// #include <cmath>
// bool check(int n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// // print all prime numbers from 1 to n
// #include <cmath>
// bool check_prime(int n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// // reverse integer(7.leetcode)
// int reverse(int x)
// {
//     int ans = 0;
//     bool isNeg = false;
//     if (x <= INT_MIN)
//     {
//         return 0;
//     }
//     if (x < 0)
//     {
//         isNeg = true;
//         x = -x;
//     }
//     while (x > 0)
//     {
//         if (ans > INT_MAX / 10)
//         {
//             return 0;
//         }
//         int digit = x % 10;
//         ans = ans * 10 + digit;
//         x /= 10;
//     }
//     return isNeg ? -ans : ans;
// }

// // set the kth bit
// int kth_bit(int k, int n)
// {
//     int mask = 1 << k;
//     int ans = (n | mask);
//     return ans;
// }

// // convert celcius into kelvin and fahrenheit
// #include <vector>
// vector<double> convertTemp(double c)
// {
//     double k = c + 273.15;
//     double f = c * 1.80 + 32;
//     vector<double> v;
//     v.push_back(k);
//     v.push_back(f);
//     return v;
// }

// // count all set bits
// int count_set_bits(int num)
// {
//     int count = 0;
//     while (num > 0)
//     {
//         int digit = num & 1;
//         if (digit == 1)
//         {
//             count++;
//         }
//         num = num >> 1;
//     }
//     return count;
// }

int main(int argc, char const *argv[])
{

    // // add two numbers
    // int num1, num2;
    // cin >> num1;
    // cin >> num2;
    // cout << "sum is : " << sum(num1, num2) << endl;

    // // write a function to return sum of three numbers
    // int n1, n2, n3;
    // cin >> n1 >> n2 >> n3;
    // cout << threeSum(n1, n2, n3);

    // // write a function to print sum of three numbers
    // threeNumberSum(4, 4, 2);

    // // find max of three numbers
    // cout << "max is : " << maxOfThreeNumbers(4, 3, 5);

    // // counting from 1 to n
    // counting_1_to_N(10);

    // // check even or odd
    // check_even_odd(10);
    // bitwise_even_odd(8);

    // // sum of all numbers from 1 to n
    // cout << "sum till n : " << sum_Till_n(10) << endl;

    // // sum of all enven numbers from 1 to n
    // cout << calculate_even_sum(10) << endl;

    // // check prime or not
    // bool ans = check_prime(11);
    // if (ans)
    // {
    //     cout << "prime" << endl;
    // }
    // else
    // {
    //     cout << "not prime" << endl;
    // }

    //  HW

    // // find the area of circle
    // float area = 5.323;
    // cout << area_of_circle(area) << endl;

    // // find factorial of a number
    // cout << factorial(12) << endl;

    // // check prime or not
    // cout << "0- not prime 1- prime : " << check(17) << endl;

    // // print all prime numbers from 1 to n
    // int n = 45;
    // for (int i = 2; i <= n; i++)
    // {
    //     bool isprime = check_prime(i);
    //     if (isprime)
    //     {
    //         cout << i << "\t";
    //     }
    // }

    // // reverse integer(7.leetcode)
    // cout << reverse(-321) << endl;

    // // set the kth bit
    // cout << kth_bit(2, 10);

    // // convert celcius into kelvin and fahrenheit
    // vector<double> vv;
    // double c = 36.50;
    // vv = convertTemp(c);
    // for (int i = 0; i < vv.size(); i++)
    // {
    //     cout << vv[i] << "\t";
    // }

    // // count all set bits of a number
    // cout << count_set_bits(15) << endl;

    // print all digit of an integer  //ultra important

    // create a number using digits

    // convert km into miles

    // print binary representation of a decimal no

    // check even odd using bitwise operator

    return 0;
}