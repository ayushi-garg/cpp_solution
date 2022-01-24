/*. Write a C program to convert a temperature reading in degrees Fahrenheit to degrees 
Celsius, using the formula: C = (5/9)x(F-32).*/

#include <iostream>

using namespace std;

int main()
{
    float Fahrenheit;
    float Celsius;
    
    cout << "enter the Fahrenheit tempertaure" << endl; 
    cin >> Fahrenheit;
    Celsius = (5*(Fahrenheit-32))/9 ;
    cout << "your temperature in Celsius is : " << Celsius << endl;

    return 0;
}