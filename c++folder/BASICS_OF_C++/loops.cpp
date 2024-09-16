/*Loops in C++
Loops are block statements, which keeps on repeatedly executing until a specified condition is met. There are three types of loops in C++

For loop in C++
While loop in C++
Do While in C++



For Loop in C++
For loop help us to run some specific code repeatedly until the specified condition is met
for(int i=0;i<n;i++)

While Loop in C++
While loop helps us to run some specific code repeatedly until the specified condition is met.
while(i<n)

Do-While Loop in C++
The do-while loop helps us to run some specific code repeatedly until a specified condition is met.
do{

}while(i<n)

*/

#include <iostream>

using namespace std;
int main()
{
   

    /*For loop in C++*/
     int i=1;
     cout<<i;
     i++;

    

    // for (int i = 1; i <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
        
    //  Printing 1 to 40 using while loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

    return 0;
}
