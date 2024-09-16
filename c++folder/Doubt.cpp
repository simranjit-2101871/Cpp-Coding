/*#include<iostream>
using namespace std;

template<class T1,class T2>
class eknayinclass{
    public:
        T1 data1;
        T2 data2;
        eknayinclass(T1 A,T2 B){
            data1=A;
            data2=B;
        }
        void display(){
        cout<<this->data1<<" "<<this->data2;
    }
};
int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();
    return 0;
*/ //use of this pointer to point the current object what is the menaing of this

//question 2-> can we use fucntion and class template simultaneously?
//QUESTION 3->Do swapping using template 
//Question 4->can class template could get overload
// Question 5-->Try default parameter in function tmeplate if you have an idea still try it
//Question 6-->read about more on file sysytem using caht gpt history
//QUESTION 7--> REDECALRATION OF POINTER MORE RESEARCH
//QUESTION 8-->AB DEKH DERIVED POINTER REVISE KARIO SAMAJH GYA?
//Question 9-->function ke adress se object ko associate karna thats what late binding do ,but what does this mean
//queston 10-->executrion of virtual and oure virtual function using multiple derived classes
//what is the redifination problem with int main(),heafer library,and inlcude all of that,and redefiantionof of classes what error will it generate and why
//difference ob.a=3 and pointer=&ob then pointer->a=3
//is there virtual for the variables like that for the fucntions
//try follow a new program strutture in c++ class main then agian class and find why java script is different from them
// read more on copy cosntructor
//what are non static data members
//what is does not name a type error 
//read all the error s generated by inheritence single walli
//reivise first slide of cosntructor in derived classes
//this pointer ke bare mai information
//why not use inline with static variables
//skipping statmenets
//The way memory is allocated to variables and functions of the class is different even though they both are from the same class.

//The memory is only allocated to the variables of the class when the object is created. The memory is not allocated to the variables when the class is declared. At the same time, single variables can have different values for different objects, so every object has an individual copy of all the variables of the class. But the memory is allocated to the function only once when the class is declared. So the objects don’t have individual copies of functions only one copy is shared among each object.

//When you call a function normally or with the help of an inline call multiple times, the old values are not retained because each function call creates a new set of local variables. Here’s a detailed explanation:
//freind fucntion overview video
// how abstraction is achieved review chat gpt code on this one(08-06=2024,saturday)
//read inheritence code also from overview

/*Function Calls and Local Variables

Local Variables:
Each time a function is called, a new stack frame is created on the call stack. This stack frame contains the function's local variables and parameters.
These local variables are initialized anew for each function call, and their values are not retained between calls.

Function Execution:
When the function execution completes, its stack frame is destroyed, and all local variables are discarded.
The next time the function is called, a new stack frame is created, and new local variables are initialized.
Example with Normal Function Call
cpp
Copy code
#include <iostream>
using namespace std;

int increment(int x) {
    x = x + 1;
    return x;
}

int main() {
    int value = 5;
    cout << increment(value) << endl; // Outputs 6
    cout << increment(value) << endl; // Outputs 6 again
    cout << increment(value) << endl; // Outputs 6 again

    return 0;
}
First Call: increment(5) - A new stack frame is created with x = 5, x is incremented to 6, and 6 is returned.
Second Call: increment(5) - A new stack frame is created with x = 5, x is incremented to 6, and 6 is returned.
Third Call: increment(5) - A new stack frame is created with x = 5, x is incremented to 6, and 6 is returned.
Example with Inline Function
cpp
Copy code
#include <iostream>
using namespace std;

inline int increment(int x) {
    return x + 1;
}

int main() {
    int value = 5;
    cout << increment(value) << endl; // Outputs 6
    cout << increment(value) << endl; // Outputs 6 again
    cout << increment(value) << endl; // Outputs 6 again

    return 0;
}
Even though increment is an inline function, the behavior is the same as the normal function call.
Each call to increment expands to value + 1, and the result is computed independently for each call.
Why Old Values Are Not Retained
New Stack Frame: Each function call (normal or inline) creates a new execution context with new local variables.
Local Scope: Local variables are confined to the scope of the function. They do not retain values between calls.
Temporary Values: In the case of inline functions, the expressions are evaluated fresh each time, with no memory of previous evaluations.
Retaining Values Between Calls
If you need to retain values between function calls, you can use:

Static Local Variables:
Static local variables retain their value between function calls.
cpp
Copy code
#include <iostream>
using namespace std;

int increment() {
    static int x = 0; // Static local variable
    x = x + 1;
    return x;
}

int main() {
    cout << increment() << endl; // Outputs 1
    cout << increment() << endl; // Outputs 2
    cout << increment() << endl; // Outputs 3

    return 0;
}
Global Variables:
Global variables can be used to retain values across function calls, though they should be used sparingly due to potential issues with global state.
cpp
Copy code
#include <iostream>
using namespace std;

int x = 0; // Global variable

int increment() {
    x = x + 1;
    return x;
}

int main() {
    cout << increment() << endl; // Outputs 1
    cout << increment() << endl; // Outputs 2
    cout << increment() << endl; // Outputs 3

    return 0;
}
Summary
Normal Function Call: Each call creates a new stack frame with new local variables, hence old values are not retained.
Inline Function: Inline expansion replaces the function call with the actual code, but each expansion acts independently with new values.
Retaining Values: Use static local variables or global variables to retain values between function calls.
*/





//do user defined fucntions beave as a fucntion template

/*User-Defined Function as a Template
When you declare a function in C++, you are essentially defining a set of instructions that can be executed whenever the function is called. Each time you call this function with different arguments, it uses those arguments to execute its code. This behavior is similar to how a template works, in the sense that the same function body is reused with different inputs.

Example
Consider a user-defined function sum:

cpp
Copy code
#include <iostream>
using namespace std;

int sum(int x, int y) {
    return x + y;
}

int main() {
    int result1 = sum(5, 10); // First call with arguments 5 and 10
    int result2 = sum(3, 4);  // Second call with arguments 3 and 4
    int result3 = sum(7, 8);  // Third call with arguments 7 and 8

    cout << "Result1: " << result1 << endl; // Outputs 15
    cout << "Result2: " << result2 << endl; // Outputs 7
    cout << "Result3: " << result3 << endl; // Outputs 15

    return 0;
}
How It Works
Function Declaration:

The function sum is declared with two parameters: int x and int y.
It returns the sum of x and y.
Function Calls:

sum(5, 10) uses the template provided by the sum function, replacing x with 5 and y with 10. It returns 5 + 10 = 15.
sum(3, 4) uses the same template, replacing x with 3 and y with 4. It returns 3 + 4 = 7.
sum(7, 8) uses the same template, replacing x with 7 and y with 8. It returns 7 + 8 = 15.
Template-like Behavior
Reusability: The function body (template) is reusable. Each call reuses the same set of instructions with different inputs.
Abstraction: The function abstracts the logic of summing two numbers, so you don't have to rewrite the logic every time you need to sum two numbers.
Function vs. Actual Template
While user-defined functions behave like templates in that they allow you to use the same logic with different inputs, they are not actual templates in the C++ language. C++ also has a feature called function templates which is a different concept:

Function Templates
A function template allows you to write generic functions that work with any data type. Here’s an example:

cpp
Copy code
#include <iostream>
using namespace std;

template <typename T>
T sum(T x, T y) {
    return x + y;
}

int main() {
    int result1 = sum(5, 10);     // Uses the template for int
    double result2 = sum(3.5, 4.5); // Uses the template for double
    float result3 = sum(7.0f, 8.0f); // Uses the template for float

    cout << "Result1: " << result1 << endl; // Outputs 15
    cout << "Result2: " << result2 << endl; // Outputs 8
    cout << "Result3: " << result3 << endl; // Outputs 15

    return 0;
}
Summary
User-Defined Functions: When you declare a function, you define a reusable set of instructions. Each function call uses this "template" with different arguments.
Function Templates: C++ also allows you to define templates that can be used to create functions for different data types.
Both concepts promote code reuse and abstraction, but function templates provide a more formal mechanism for writing generic and type-safe code.*/