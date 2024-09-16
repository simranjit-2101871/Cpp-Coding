/*A copy constructor is a type of constructor that creates a copy of another object. If we want one object to resemble another object we can use a 
copy constructor. If no copy constructor is written in the program compiler will supply its own copy constructor. An example program to demonstrate
the concept of a Copy constructor in C++ is shown below.
*/
#include<iostream>
using namespace std;


class Number {
    int a;
    public:
        Number(){
            a=0;
        }
        Number(int num){
            a=num;

        }
        Number(Number &obj){
            cout<<"Copy cosntructor called"<<endl;
            //a=a.obj; well what is the mistale in this bro
        }
        void display(){
            cout<<"The number of thimes the object ahs been called"<<a<<endl;
        }

};

int main(){
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);//copy  called
    z1.display();

    z2=z;//copy not called
    z2.display();


    Number z3=z;//copy is called or invoked
    z3.display();


    //yar z1 pura ka pura match karna chahiye z ,x yaan y ke saath
    }

    /*
    1.) Initialization of Copies: It allows you to create a new object that is a copy of an existing object. This is particularly useful when you 
        want to create a duplicate of an object with all its attributes.

    2.) Default Copy Constructor: If you do not define a copy constructor explicitly, C++ provides a default copy constructor, which performs a 
        member-wise copy of the object's attributes. However, for classes with dynamically allocated memory or other special resources, a custom 
        copy constructor may be necessary to ensure proper copying behavior.
        
    3.) Deep Copy vs. Shallow Copy: In situations where an object contains pointers or references to dynamically allocated memory or other resources,
        it's important to consider whether a deep copy (copying the pointed-to data) or a shallow copy (copying just the pointer) is appropriate. 
        The copy constructor's implementation dictates this behavior.*/