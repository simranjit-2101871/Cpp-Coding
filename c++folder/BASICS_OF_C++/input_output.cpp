/*Basic Input and Output in C++
C++ language comes with different libraries, which helps us in performing input/output operations. In C++ sequence of bytes corresponding to input 
and output are commonly known as streams. There are two types of streams:

Input stream
In the input stream, the direction of the flow of bytes occurs from the input device (for ex keyboard) to the main memory.

Output stream
In output stream, the direction of flow of bytes occurs from main memory to the output device (for ex-display)

Basic Input and Output in C++
C++ language comes with different libraries, which helps us in performing input/output operations. In C++ sequence of bytes corresponding to input 
and output are commonly known as streams. There are two types of streams:

Input stream
In the input stream, the direction of the flow of bytes occurs from the input device (for ex keyboard) to the main memory.

Output stream
In output stream, the direction of flow of bytes occurs from main memory to the output device (for ex-display)*/

# include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:\n"; /* '<<' is called Insertion operator */
    cin>>num1; /* '>>' is called Extraction operator */

    cout<<"Enter the value of num2:\n"; /* '<<' is called Insertion operator */
    cin>>num2; /* '>>' is called Extraction operator */

    cout<<"The sum is "<< num1+num2;

    return 0;
}

