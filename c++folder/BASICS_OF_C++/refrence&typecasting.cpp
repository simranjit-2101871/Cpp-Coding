/*Built-in Data Types
As discussed in our previous lectures, built-in data types are pre-defined by the language and can be used directly

Float, Double and Long Double Literals
The main reason to discuss these literals was to tell you an important concept about them.

So the crucial concept which I am talking about is that in C++ language, double is the default type given to a  decimal literal (34.4 is double by 
default and not float), so to use it as float, you have to specify it like "34.4F," as shown in figure 3. To display the size of float, double, and
 long double literals, we have used a "sizeof" operator. 


Reference Variable
Reference variables can be defined as another name for an already existing variable. These are also called an alias. For example, let us say we 
have a variable with the name of "sum", but we also want to use the same variable with the name of "add", to do that we will make a reference 
variable with the name of "add".

Typecasting
Typecasting can be defined as converting one data type into another
*/


#include<iostream> 

using namespace std;

int c = 45;

int main(){
    
    // *************Build in Data types****************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

    // ************* Float, double and long double Literals****************
    // float d=34.4F;
    // long double e = 34.4L; 
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;  

    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting**************** 
    int a = 45;   
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;


    return 0;
}
