/*efore explaining the concept of variable scope, I would like to clarify about variables a little more. Variable can be defined as a container to hold data. Variables are of different types, for example:

Int-> Int is used to store integer data e.g (-1, 2, 5,-9, 3, 100).
Float-> Float is used to store decimal numbers e.g (0.5, 1.05, 3.5, 10.5)
Char-> Char is used to store a single character e.g. ('a', 'b',' c', 'd')
Boolean-> Boolean is used to store "true" or "false."
Double-> Double is also used to store decimal numbers but has more precision than float, e.g. (10.5895758440339...)
Here is an example to understand variables: int sum = 34; means that sum is an integer variable that holds value '34' in memory.

Syntax for Declaring Variables in C++

Data_type Variable_name = Value;
Ex: int a=4; char letter = ‘p’;
Ex: int a=4, b=6;
Variable Scope
The scope of a variable is the region in the program where the existence of that variable is valid. For example, consider this analogy - if one person travels to another country illegally, we will not consider that country as its scope because he doesn't have the necessary documents to stay in that country.

Base on scope, variables can be classified into two types:

Local variables
Global variables

Local variables:
Local variables are declared inside the braces of any function and can be assessed only from there. 

Global variables:
Global variables are declared outside any function and can be accessed from anywhere.

Data Types
Data types define the type of data that a variable can hold; for example, an integer variable can hold integer data, a character can hold character data, etc.

Data types in C++ are categorized into three groups:

Built-in
User-defined
Derived
1. Built-in Data Types in C++:
Int
Float
Char
Double
Boolean
2. User-Defined Data Types in C++:
Struct
Union
Enum
Note: We will discuss the concepts of user-defined data types in another lecture. For now, understanding that these are user-defined data types is enough.

3. Derived Data Types in C++:
Array
Pointer
Function
Note: We will discuss the concept of derived data types in another lecture. For now, understanding that these are derived data types is enough


Rules to Declare Variables in C++
Variable names in C++ language can range from 1 to 255
Variable names must start with a letter of the alphabet or an underscore
After the first letter, variable names can contain letters and numbers
Variable names are case sensitive
No spaces and special characters are allowed
We cannot use reserved keywords as a variable name*/

# include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a; 
    cout<< glo;
    }

int main(){
    int glo=9;
    glo=78;
    // int a = 14;
    // int b = 15;
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = false;
    sum();
    cout<<glo<< is_true;
    // cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<< b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}
