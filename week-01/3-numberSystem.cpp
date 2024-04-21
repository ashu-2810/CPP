// decimal system
        /*
        the decimal number system has base 10
        it uses digits from 0 to 9
        BASE:it is the number of symbols(digits) a number system uses
        */

    // binary number system
        /*
        number system uses base 2
        it uses only tow digits i.e.,0 and 1
        */
    
    // decimal to binary conversion
        /*
        Division Method
          -> Divide number by 2
          -> store remainder(that will be a bit in binary number)
          -> repeat above steps with quotient until quotient is less than 2
          -> reverse the bit obtained
        */
        /*
        Bitwise Method
         -> obtain bit with bitwise AND operation i.e.(N&1)
         -> right shift N by 1 (N=N>>1)
         -> repeat above steps till N>0
         ->reverse the bits so obtained
        */
    // binary to decimal conversion
        /*
         -> multiple each digit with its place value
         -> add up all place values
         -> sum is the decimal number
        */

#include<iostream>
#include<cmath>
using namespace std;
int decimalToBinaryUsingDivision(int n){
    // division method
    int binaryno = 0;
    int i = 0;
    while (n>0)
    {
        int bit = n & 1;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}
int decimalToBinaryUsingBitwise(int n){
    // bitwise method
    int binaryno = 0, i = 0;
    while (n>0)
    {
        int bit = n & 1;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}
int binaryToDecimalUsingDivision(int n){
    int decimalno = 0, i = 0;
    while (n)
    {
        int bit = n % 10;
        decimalno = decimalno + bit * pow(2, i++);
        n = n / 10;
    }
    return decimalno;
}
int binaryToDecimalUsingBitwise(int n){
    int decimalno = 0, i = 0;
    while (n>0)
    {
        int bit = n & 1;
        decimalno = decimalno + (bit * pow(2, i++));
        n = n >> 1;
    }
    return decimalno;
}
    int main()
    {
        int n;
        cin >> n;
        int binary1 = decimalToBinaryUsingDivision(n);
        cout << binary1 << endl;

        int binary2 = decimalToBinaryUsingBitwise(n);
        cout << binary2 << endl;

        int decimal1 = binaryToDecimalUsingDivision(binary1);
        cout << decimal1 << endl;

        int decimal2 = binaryToDecimalUsingBitwise(binary2);
        cout << decimal2 << endl;

        return 0;
}