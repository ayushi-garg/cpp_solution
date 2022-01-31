/*Write a program that takes an integer as input (e.g. 3456) and outputs the number 
with the order of digits reversed. For example, input: 3456; output: 6543*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0,rem=0;
    int new_num = 0;
    cout << "enter the digits" << endl;

    cin >> num;
    
    while(num != 0) 
    {
        rem = num % 10;
        num = num/10 ;
        
        new_num = new_num*10 + rem ; 
    }

    cout << "reverse no is : " << new_num <<endl;

    return 0;
}