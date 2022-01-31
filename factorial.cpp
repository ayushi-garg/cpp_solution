/*. Write a recursive function to compute  (b) the factorial of a given number*/
#include <iostream>
using namespace std;

int factorial(int n);
int main()
{
    int no;
    cout << "enter the num" << endl;
    cin >> no;
    cout << factorial(no) << endl;
    return 0;
}
int factorial(int n)
{
    if(n ==1)
    {
        return 1;
    }
    return n * factorial(n-1);
}