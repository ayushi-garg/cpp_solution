/* Write a program to read your name, roll number and CGPA and displays them to the 
screen*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    short int roll_no;
    float CGPA;
    string name;

    cout << "type your name" << endl;

    getline(cin,name);

    cout << "enter your roll no" << endl;

    cin >> roll_no;

    cout << "enter your CGPA" << endl;

    cin >> CGPA;

    cout << "your info is as follows:" << endl;
    cout << "your name is " << name << endl; 
    cout << "your roll no is " << roll_no << endl;
    cout << "your CGPA is " << CGPA << endl;

    return 0;
}
