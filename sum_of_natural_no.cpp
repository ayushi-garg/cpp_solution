/*8. Write a recursive function to compute (a) the sum of the first n natural numbers */
// s = n*(n+1)/2
#include <iostream>
using namespace std;

int sum(int n);
int main()
{
    int no = 1 ;
    cout << "enter the natural number to sum" << endl ;
    cin >> no ;
    cout << sum(no) << endl;
    return 0;
}

int sum (int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n + sum(n-1) ;
}