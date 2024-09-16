//A scrnario where multiple cosntrictors are being declared,so what will happen 

/*Constructor overloading is a concept in which one class can have multiple constructors with different parameters. The main thing to note here is 
that the constructors will run according to the arguments for example if a program consists of 3 constructors with 0, 1, and 2 arguments, so if we
pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument. An example program to demonstrate
the concept of Constructor overloading in C++ is shown below.*/


#include<iostream>
using namespace std;

class something {
    int a,b;

    public:
        something(){
            a=0;
            b=0;
            cout<<"Default cosntructor is callled"<<endl;
        }

        something(int x,int y){
            a=x;
            b=y;
            cout<<"Cosntructor with two arguments  is callled"<<endl;
        }
        something(int x){
            a=x;
            cout<<"Cosntructor with one argument is callled"<<endl;
        }
};

int main(){
    something obj;
    cout<<"CHALO JI KAM HO GYA, NOW LETS MOVE TO NEXT CODE"<<endl;
    return 0;
}