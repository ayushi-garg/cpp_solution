/*. In the Fibonacci series, each number is the sum of the previous two numbers of the 
series, except for the first two numbers of the series, which are 0 and 1 respectively. In 
other words, Fi = Fi-1 + Fi-2. F0 = 0 and F1 = 1. Write recursive and iterative functions to
display all Fibonacci numbers less than a given number n.*/
//iterative

#include <iostream>
using namespace std;

void fibonacci(int x);

int main()
{
    int no = 0 ;
    cout << "enter the no : " << endl;
    cin >> no;
    fibonacci(no);
    return 0;
}

void fibonacci(int x)
{
    int prev = 0;
    int curr = 1;

    int sum = 0;
   

    cout << prev << endl;
    cout << curr << endl;
    sum = prev + curr;
    while(sum <= x)
    {
        cout << sum  << endl;
        prev = curr ;
        curr = sum ;
        sum = prev + curr;
        
    }
}