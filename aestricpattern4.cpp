/*. Write c programs to generate the following asterisk patterns using nested loops:*/
            //         *
            //       * *
            //     * * *
            //   * * * *
            // * * * * *
#include <iostream>
using namespace std;
int main()
{
    for (int i=5;i>=1;i--)
    {
        
        for (int j=i-1;j>=1;j--)
        {
            cout << " " ;
        }
        for (int k=i;k<=5;k++)
        {
            cout << "*";
        }
         
        cout << endl; 
    }
    return 0;
}