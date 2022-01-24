/*Write a C program to calculate and display the volume (V) and area (A) of a sphere
using the formulae: Area A = 4*PI*R2 and Volume = AR/3, where R is the radius.*/
#include <iostream>
using namespace std;

int main()
{   
    float area =0;
    float volume=0;
    float radius=1;
    
    cout << "Enter the Radius" << endl;
    cin >> radius ;
    cout << "your radius is" << radius << endl;
    area = 4*3.14*radius*radius;
    
    cout << "area is" << area << endl;
    
    cout << "volume is" << (area*radius)/3 << endl;
     
    return 0;
}
