/*In this C++ , the topics which we are going to cover today are given below:

Break Statements in C++
Continue Statements in C++

Break Statements
We had already discussed a little bit about break statements in switch statements.

Continue Statements in C++
Continue statements are somewhat similar to break statements. The main difference is that the break statement entirely terminates the loop, but the
continue statement only terminates the current iteration
*/

#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    
    return 0;
}
