/*
Inline Functions in C++::
Inline functions are used to reduce the function call. When one function is being called multiply times in the program it increases the execution 
time, so inline function is used to reduce time and increase program efficiency. If the inline function is being used when the function is called, 
the inline function expands the whole function code at the point of a function call, instead of running the function. Inline functions are considered 
to be used when the function is small otherwise it will not perform well. Inline is not recommended when static variables are being used in the 
function.
*/
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    return 0;
}

/*
The main thing to note here is that the function will not run instead 
of it the function code will be copied at the place where the function is being called. This will increase the execution time of the program 
because the compiler doesn’t have to copy the values and get the return value again and again from the compiler
*/

/*
Function Call Overhead:

Normally, each time you call a function like product(a, b), there is a small overhead: the program has to copy the arguments, transfer control to the function, execute the function, and then return the result.
When a function is called multiple times, this overhead is incurred multiple times.
Inline Functions:

An inline function is a function that the compiler attempts to expand at each point of call, replacing the function call with the actual code of the function.
This can eliminate the overhead of function calls, making the program faster, especially for small, frequently called functions.



Pros and Cons

Pros:
Reduced Function Call Overhead: 
Eliminates the overhead associated with function calls, potentially speeding up execution.

Potentially Faster Execution: 
Especially for small and frequently called functions.


Cons:
Increased Code Size: 
Inlining increases the size of the binary because the function code is duplicated at each call site.
Less Effective for Large Functions: For large functions, inlining can increase the code size significantly without proportionate performance benefits.

Code Expansion:
When the compiler inlines a function, it places a copy of the function's body directly into the place where the function is called. This happens at compile time.
This can lead to larger binary sizes if the function is called many times, because the function body is duplicated at each call site.




When to Use Inline Functions
Small Functions: 
Best suited for small, frequently called functions where the overhead of function calls is significant compared to the function's execution time.

Performance Critical: 
Useful in performance-critical code where function call overhead needs to be minimized.

Compiler's Discretion: 
Modern compilers are good at deciding whether to inline a function, even without the inline keyword. They balance the benefits of inlining against 
the cost of increased binary size.
*/