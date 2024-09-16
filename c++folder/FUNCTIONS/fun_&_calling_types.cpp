/*Functions in C++
Functions are the main part of top-down structured programming. We break the code into small pieces and make functions of that code. Functions 
help us to reuse the code easily. 


Function Prototype in C++
The function prototype is the template of the function which tells the details of the function e.g(name, parameters) to the compiler. Function 
prototypes help us to define a function after the function call.

Some examples of acceptable and not acceptable prototypes are shown below:

1.) int sum(int a, int b); //Acceptable
2.) int sum(int a, b); // Not Acceptable
3.) int sum(int, int); //Acceptable

*/
/*Formal Parameters
The variables which are declared in the function are called a formal parameter. For example, as shown in Code, the variables “a” and “b”
are the formal parameters.*/

int sum(int a, int b){
 int c = a+b;
    return c;
}

/*Actual Parameters
The values which are passed to the function are called actual parameters. For example, as shown in Code , the variables “num1” and “num2”
are the actual parameters.
*/
int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    return 0;
}


//EXAMPLE CODE
#include<iostream>
using namespace std;

// Function prototype
// type function-name (arguments);
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
int sum(int, int); //--> Acceptable 
// void g(void); //--> Acceptable 
void g(); //--> Acceptable 

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a+b;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}



//CALL THE FUCNTION BY DIFFERNT METHODS OF PASSING VALUES
/*Call by Value in C++
Call by value is a method in C++ to pass the values to the function arguments. In case of call by value the copies of actual parameters are sent 
to the formal parameter, which means that if we change the values inside the function that will not affect the actual values*/

/*Call by Pointer in C++
A call by the pointer is a method in C++ to pass the values to the function arguments. In the case of call by pointer, the address of actual parameters
is sent to the formal parameter, which means that if we change the values inside the function that will affect the actual values*/

/*Call by Reference in C++
Call by reference is a method in C++ to pass the values to the function arguments. In the case of call by reference, the reference of actual parameters 
is sent to the formal parameter, which means that if we change the values inside the function that will affect the actual values*/

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}

// Call by reference using C++ reference Variables
// int & 
void swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    // return a;
}

int main(){
    int x =4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
