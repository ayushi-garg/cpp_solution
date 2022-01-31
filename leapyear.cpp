/*Write a C program that reads the year as input from keyboard, and prints whether it is 
a leap year or not.*/

#include <iostream>
#include<string>
using namespace std;

int main()
{
    int year;
    cout << "enter the year" << endl;
    cin >> year ;

    if((year %400 ==0) || ((year%100 != 0) && (year%4 == 0)))
    {
        cout << "leap year" << endl;
    }
    else{
        cout << "not leap year" << endl;
    }
    return 0;
}