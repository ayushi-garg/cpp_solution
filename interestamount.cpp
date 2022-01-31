/* Write a C program to determine the amount of money that would accumulate in a
bank after n years if a known amount, P, is deposited annually and the account collects 
interest at a rate of r percent per year, compounded annually*/

#include <iostream>
using namespace std;

int main()
{
    // formula to calculate simple interest = a = p(1+rt)
    // formula to calculate compund interest = final amount = a = p(1+r/n)^(nt)

    // t in years, r in %, n in 
    //

    float amount,p,t,r;
    cout << "enter principal" << endl;
    cin >>  p;

    cout << "enter year" << endl;
    cin >>  t;

    cout << "enter interest" << endl;
    cin >>  r;
    
    cout << "amount : " << p*(1+(r*t)) << endl; 

    return 0;
}