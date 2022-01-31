/*Write a program to calculate and display the roots of a quadratic equation of the
general form Ax2 + Bx + C = 0.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    cout << "enter the quadratic equation coefficient 1" << endl;

    cin >> a ;

    cout << "enter the quadratic equation coefficient 2" << endl;

    cin >> b;

    cout << "enter the quadratic equation coefficient 3" << endl;

    cin >> c;

    // finding the discreminant of the quadratic eqn b^2 - 4ac

    float dis = (b*b) - (4*a*c);

    if(dis == 0)
    {
        cout << "root of the quadratic eqn are:" << -((b)/(2*a)) << endl ;
    }
    else if(dis < 0)
    {
        float val = -b/(2*a);
        float val2 = sqrt(-dis);
        cout << "first root is " <<  val << " + i " << val2/(2*a) << endl;
        cout << "second roots is " << val << " - i " << val2/(2*a) << endl;

    }
    else{
        float val = sqrt(dis);
        cout << "first root is " << (-b+val)/(2*a) << endl;
        cout << "second root is " << (-b-val)/(2*a) << endl;
    }

    return 0;
}