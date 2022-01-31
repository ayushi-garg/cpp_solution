/*Write a menu-driven C program to perform the basic arithmetic operations of a simple 
desktop calculator.*/
// function,  dowhile, switch case

#include <iostream>
using namespace std;

int add(int x, int y);
int multiply(int x, int y);
int substract(int x, int y);
int divide(int x, int y);
int printval(int x);
int inputval();

int a,b;
int n = 1;
int val;
int main()
{
    do
    {
        cout << "*****************************" << endl;
        cout << "enter the operation to perform" << endl;
        cout << "press 1 for add" << endl;
        cout << "press 2 for substract" << endl;
        cout << "press 3 for multiply" << endl;
        cout << "press 4 for divide" << endl;
        cout << "press 0 to exit" << endl;
        cout << "*****************************" << endl;

        cin >> val;

        switch(val)
        {
            case 0:
            {
                n = 0;
                break;
            }
            case 1:
            {
                a = inputval();
                b = inputval();
                printval(add(a,b));
                break;
            }
            case 2:
            {
                a = inputval();
                b = inputval();
                printval(substract(a,b));
                break;
            }
            case 3:
            {
                a = inputval();
                b = inputval();
                printval(multiply(a,b));
                break;
            }
            case 4:
            {
                a = inputval();
                b = inputval();
                printval(divide(a,b));
                break;
            }
            default:
            {
                cout << "choice other than 0,1,2,3,4" << endl;
                break;
            }
        }
    }
    while(n);
    
    return 0;
}


int inputval()
{
    int x;
    cout << "enter digit" << endl;
    cin >> x;
    return x ;
}

int printval(int x)
{
    cout << "output val is : " << x << endl;
    return 0;
}

int add(int x, int y)
{
    return x+y;
}
int substract(int x, int y)
{
    return x-y;
}
int multiply(int x, int y)
{
    return x*y;
}
int divide(int x, int y)
{
    return x/y;
}