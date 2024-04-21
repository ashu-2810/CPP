#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    // // Q1. if sides 3 print triangle,4 rect,5 pentagon,mujhe nhi pta
    // int sides = 3;
    // if (sides==3)
    //     cout << "triangle" << endl;
    // else if (sides == 4)
    //     cout<< "rectangle" << endl;
    // else if(sides==5)
    //     cout << "pentagon" << endl;
    // else
    //     cout << "not triangle" << endl;
    
    // // Q2. find n is +ve, -ve, 0
    // int n = 12;
    // if (n>0)
    // {
    //     cout << "+ve" << endl;
    // }
    // else if (n<0)
    // {
    //     cout << "-ve" << endl;
    // }
    // else
    // {
    //     cout << "0" << endl;
    // }
    
    // // Q3. find n odd even
    // int n = 3;
    // if ((n%2) == 0)
    // {
    //     cout << "even" << endl;
    // }
    // else
    // {
    //     cout << "odd" << endl;
    // }
    
    // // Q4. 11 times print name
    // for (int i = 1; i <= 11; i++)
    // {
    //     cout << "Ashu" << endl;
    // }
    
    // // Q5. 19 table
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << 19 * i << endl;
    // }
    
    // // Q6. 1 -> 100 even no
    // for (int i = 2; i <= 100; i=i+2)
    // {
    //     cout << i << " ";
    // }
    
    // pattern

    // // Q7. square pattern
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    // // Q8. rectangle pattern
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    // // Q9. hollow rectangle
    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 0; col < 5; col++)
    //     {
    //         if (row==0||row==4||col==0||col==4)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Q10. half pyramid
    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    // // Q11. inverted half pyramid
    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    // // Q12. numeric half pyramid
    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout << col + 1<<" ";
    //     }
    //     cout << endl;
    // }
    
    // // Q13. inverted numeric half pyramid
    // int n = 5;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         cout << col + 1 << " ";
    //     }
    //     cout << endl;
    // }
    
    // // Q14. what happens when you pass cin as parameter
    // int n;
    // if (cin>>n)
    // {
    //     cout << "Ashu" << endl;
    // }
    
    // // Q15. what happens when you pass cout as parameter
    // int n = 10;
    // if (cout<<n)
    // {
    //     cout << "ashu" << endl;
    // }
    
    // // Q16. solid square pattern
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    // // Q17. hollow square pattern
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i==0||i==n-1||j==0||j==n-1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Q18. hollow inverted half pyramid
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         if (j==0||j==n-i-1||i==0||i==n-1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Q19. hollow full pyramid
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     // inverted space
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout << ". ";
    //     }
    //     // pyramid
    //     for (int k = 0; k < 2*i+1; k++)
    //     {
    //         if (i==0||i==n-1||k==0||k==2*i)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << ". ";
    //         }
    //     }
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout << ". ";
    //     }
    //     cout << endl;
    // }
    
    return 0;
}