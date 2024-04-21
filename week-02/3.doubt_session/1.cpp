#include <iostream>
#include "2.h"

using namespace std;
void fun()
{
    cout << "fun ho gaya" << endl;
}
int main(int argc, char const *argv[])
{
    fun();
    // calling function from different cpp file
    funFrom2();

    return 0;
}