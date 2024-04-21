#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // // Q1. full pyramid
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     // space
    //     for (int space = 0; space < n-i-1; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    // // Q2. inverted full pyramid
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     // space
    //     for (int space = 0; space < i; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // Q3. diamond pattern
    // int num;
    // cin >> num;
    // int n = num/2;
    // // upper half
    // for (int i = 0; i < n; i++)
    // {
    //     // space
    //     for (int space = 0; space < n-i-1; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // // lowwer half
    // for (int i = 0; i < n; i++)
    // {
    //     // space
    //     for (int space = 0; space < i; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // Q4. hollow pyramid
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     // space
    //     for (int space = 0; space < n-i-1; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < 2*i+1; j++)
    //     {
    //         if (j==0||j==2*i)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }   
    //     }
    //     cout << endl;
    // }
    
    // // Q5. inverted hollow pyramid
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     // space
    //     for (int space = 0; space < i; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < 2*n-(2*i+1); j++)
    //     {
    //         if (j==0||j==(2*n-(2*i+1))-1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Q6. hollow diamond
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     // space
    //     for (int space = 0; space < n-i-1; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < 2*i+1; j++)
    //     {
    //         if (j==0||j==2*i)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     // space
    //     for (int space = 0; space < i; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < 2*n-(2*i+1); j++)
    //     {
    //         if (j==0||j==2*n-(2*i+1)-1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Q7. flipped solid diamond
    // int num;
    // cin >> num;
    // int n = num / 2;
    // for (int i = 0; i < n; i++)
    // {
    //     // star
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space 1-3-5-7-9...
    //     for (int space = 0; space < 2*i+1; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     // star
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space ....9-7-5-3-1
    //     for (int space = 0; space < 2*n-(2*i+1); space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    // // Q8. fancy pattern 1
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2*i+1; j++)
    //     {
    //         if (j%2==0)
    //         {
    //             cout << i + 1;
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Q9. fancy pattern 1.5
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2*i+1; j++)
    //     {
    //         if (j%2==0)
    //         {
    //             cout << i + 1;
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = 0; j < 2*(n-1)-2*i-1; j++)
    //     {
    //         if (j%2==0)
    //         {
    //             cout << (n - 1) - i;
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Q10. hollow inverted half pyramid
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         if (i==0||i==n-1||j==0||j==n-i-1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Q11. fancy pattern 2
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         if (i==0||i==n-1||j==0||j==i)
    //         {
    //             cout << j + 1;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Q12. alphabet palindrome
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << ch++;
    //     }
    //     ch = ch - 2;
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << ch--;
    //     }
    //     cout << endl;
    // }
    
    // // Q13. numeric hollow inverted half pyramid
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         if (i==0)
    //         {
    //             cout << j + 1;
    //         }
    //         else if (j==0)
    //         {
    //             cout << i + 1;
    //         }
    //         else if (j==n-i-1)
    //         {
    //             cout << n;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Q14. numeric palindrome equivalent pyramid
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     // space
    //     for (int space = 0; space < n-i-1; space++)
    //     {
    //         cout << " ";
    //     }
    //     // number
    //     int j = 0;
    //     int num = j + 1;
    //     for (j; j < i+1; j++)
    //     {
    //         cout << num++;
    //     }
    //     num = num - 2;
    //     // inverse number
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout << num--;
    //     }
    //     cout << endl;
    // }
    
    // // Q15. fancy pattern 3
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     // star
    //     for (int j = 0; j < 2*n-i-2; j++)
    //     {
    //         cout << "*";
    //     }
    //     // pattern
    //     for (int pat = 0; pat < 2*i+1; pat++)
    //     {
    //         if (pat%2==0)
    //         {
    //             cout << i + 1;
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     // star
    //     for (int j = 0; j < 2*n-i-2; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    // // Q16. solid half diamond
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < (n-1); i++)
    // {
    //     for (int j = 0; j < (n-1)-i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    // // Q17. floy'd triangle
    // int n;
    // cin >> n;
    // int counter = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << counter++;
    //     }
    //     cout << endl;
    // }
    
    // // Q18. butterfly pattern
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     // star
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space
    //     for (int space = 0; space < 2*n-2*i-2; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     // star
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << "*";
    //     }
    //     // space
    //     for (int space = 0; space < 2*i; space++)
    //     {
    //         cout << " ";
    //     }
    //     // star
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    return 0;
}