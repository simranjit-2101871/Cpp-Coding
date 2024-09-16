/*Header Files in C++
"#include" is used in C++ to import header files in our C++ program. The reason to introduce the "<iostream>" header file into our program is that 
functions like "cout" and "cin" are defined in that header file. There are two types of header files:

System Header Files
System header files ships with the compiler. For example, “#include <iostream>”. To see the references for header files click here

 User-Defined Header Files
The programmer writes User-defined header files himself. To include your header file in the program, you first need to make a header file in the 
current directory, and then you can add it.

Operators in C++
Operators are used for producing output by performing various types of calculations on two or more inputs. In this lecture, we will see the 
operators in C++.

Arithmetic Operators
Arithmetic operators are used for performing mathematical operations like (+, -, *). The arithmetic operators

Assignment Operators
Assignment operators are used for assigning values to variables. For example: int a = 10, b = 5;

Comparison Operators
Comparison operators are used for comparing two values

Logical Operators
Logical operators are used for comparing two expressions. For example ((a==b) && (a>b))*/




// There are two types of header files:
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory

using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl; 

    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 


    return 0;
}
