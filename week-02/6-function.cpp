#include <iostream>
#include <cmath>

using namespace std;

// // Q1. add two num
// int addTwoNum(int a, int b)
// {
//     return (a + b);
// }

// // Q2. write a function to return sum of 3 no.
// int sumOfThree(int n1, int n2, int n3)
// {
//     return (n1 + n2 + n3);
// }

// // Q3. write a function to find max of three numbers
// int MaxInThree(int n1, int n2, int n3)
// {
//     if (n1 > n2 && n1 > n3)
//     {
//         return n1;
//     }
//     else if (n2 > n1 && n2 > n3)
//     {
//         return n2;
//     }
//     else
//     {
//         return n3;
//     }
// }
// or you can use an inbuilt function max it takes only two parameters

// // Q4. print counting from 1 to n
// void printCounting(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << i + 1 << endl;
//     }
// }

// // Q5. check prime or not
// int checkPrime(int n)
// {
//     int flag = 0;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             flag += 1;
//         }
//     }
//     return flag;
// }

// // Q6. check even or odd
// int checkEvenOdd(int n)
// {
//     int flag = 0;
//     // if (n % 2 == 0) // using modulo operator
//     if ((n & 1) == 0) // using bitwise operator
//     {
//         flag = 1;
//     }
//     return flag;
// }

// // Q7. sum of all no upto 1->n
// int allSum(int n)
// {
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// // Q8. sum of all even no upto 1->n
// int evenSum(int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n + 1; i += 2)
//     {
//         sum += i;
//     }
//     return sum;
// }

// HW

// // Q9. function to area of circle
// double areaOfCircle(int r){
//     return (3.14*r*r);
// }

// // Q10. function to find factorial of a no
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i < n + 1; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

// // Q11. print all prime no from 1->n
// int checkPrime(int n)
// {
//     int flag = 0;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             flag = 1;
//         }
//     }
//     return flag;
// }
// void allPrimes(int n)
// {
//     for (int i = 0; i < n + 1; i++)
//     {
//         int prime = checkPrime(i);
//         if (prime == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }

// // Q12. print all digits of an integer
// void integersAllDigits(int n)
// {
//     while (n > 0)
//     {
//         int digit = n % 10;
//         cout << digit << " ";
//         n /= 10;
//     }
// }

// Q13. create a no using digits

// Q14. print binary representation of a decimal no

// Q15. convert Km to Miles

// Q16. convert farhenheit into celcius

// Q17. count all set bit of a number

// Q18. check even odd using bitwise operator

// Q19. reverse integer(leetcode Q7)
int reverse_int(int n)
{
    int ans = 0, rem = 0;
    bool isNeg = false;
    if (n < 0)
    {
        isNeg = true;
        n = -n;
    }

    while (n > 0)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    return isNeg ? -ans : ans;
}
int main()
{
    // // Q1. add two num
    // int num1 = 5, num2 = 6;
    // int result = addTwoNum(num1, num2);
    // cout << "result : " << result << endl;

    // // Q2. write a function to return sum of 3 no.
    // int n1 = 5, n2 = 4, n3 = 1;
    // cout << "sum of three numbers is : " << sumOfThree(n1, n2, n3) << endl;

    // // Q3.write a function to find max of three numbers
    // int n1 = 5, n2 = 9, n3 = 1;
    // cout << "max in " << n1 << ", " << n2 << ", " << n3 << " is : " << MaxInThree(n1, n2, n3) << endl;

    // // Q4. print counting from 1 to n
    // int n;
    // cin >> n;
    // printCounting(n);

    // // Q5. check prime or not
    // int n, flag;
    // cout << "Enter the no to check if it is prime or not : ";
    // cin >> n;
    // flag = checkPrime(n);
    // if (flag == 0)
    // {
    //     cout << "it is a prime no." << endl;
    // }
    // else
    // {
    //     cout << "it is not a prime no." << endl;
    // }

    // // Q6. check even or odd
    // int n, flag;
    // cout << "enter no to check even or odd : ";
    // cin >> n;
    // flag = checkEvenOdd(n);
    // if (flag == 0)
    // {
    //     cout << "no is odd" << endl;
    // }
    // else
    // {
    //     cout << "no is even" << endl;
    // }

    // // Q7. sum of all no upto 1->n
    // int n, sum;
    // cout << "enter no to sum upto n : ";
    // cin >> n;
    // sum = allSum(n);
    // cout << "sum of no upto " << n << " is : " << sum << endl;

    // // Q8. sum of all even no upto 1->n
    // int n, sum;
    // cout << "Enter no to get sum upto entered no : ";
    // cin >> n;
    // sum = evenSum(n);
    // cout << "sum : " << sum;

    // HW

    // // Q9. function to area of circle
    // float r;
    // cout<<"enter radius to get the area of circle : ";
    // cin>>r;
    // double area = areaOfCircle(r);
    // cout<<"area of circle is : "<<area;

    // // Q10. function to find factorial of a no
    // int n;
    // cout << "Enter the no to find the factorial : ";
    // cin >> n;
    // cout << "factorial of " << n << " is : " << factorial(n) << endl;

    // // Q11. print all prime no from 1->n
    // int n;
    // cout << "Enter no to print all prime upto n : ";
    // cin >> n;
    // allPrimes(n);

    // // Q12. print all digits of an integer
    // int n = 1245;
    // integersAllDigits(n);

    // Q13. create a no using digits

    // Q14. print binary representation of a decimal no

    // Q15. convert Km to Miles

    // Q16. convert farhenheit into celcius

    // Q17. count all set bit of a number

    // Q18. check even odd using bitwise operator

    // Q19. reverse integer(leetcode Q7)
    int num = reverse_int(-1234);
    cout << (num) << endl;

    return 0;
}