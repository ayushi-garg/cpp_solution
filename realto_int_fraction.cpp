/*Write a C program
 that accepts a real number and prints the integral and fractional 
parts on the screen*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    float no;
    short int val;
    cout << "write your real number" << endl;
    cin >> no;
    val = no;
    no = no - val;

    cout << "integer part is : " << val << endl;
    cout << "fraction part is : "  << no << endl;

    return 0;
}