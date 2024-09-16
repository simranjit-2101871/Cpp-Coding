//Special emphasis on protected access modifier



/* 	                        Public Derivation           Private Derivation    	        Protected Derivation
Private members           	    Not Inherited           Not Inherited              	    Not Inherited              
Protected members           	Protected               Private                         Protected                    
Public members           	    Public	                Private                         Protected                    
As shown in the table,
*/

/*
1.) If the class is inherited in public mode then its private members cannot be inherited in child class.
2.) If the class is inherited in public mode then its protected members are protected and can be accessed in child class.
3.) If the class is inherited in public mode then its public members are public and can be accessed inside child class and outside the class.
4.) If the class is inherited in private mode then its private members cannot be inherited in child class.
5.) If the class is inherited in private mode then its protected members are private and cannot be accessed in child class.
6.) If the class is inherited in private mode then its public members are private and cannot be accessed in child class.
7.) If the class is inherited in protected mode then its private members cannot be inherited in child class.
8.) If the class is inherited in protected mode then its protected members are protected and can be accessed in child class.
9.) If the class is inherited in protected mode then its public members are protected and can be accessed in child class.
*/



//CODE EXAMPLE
#include<iostream>
using namespace std;

class base{
    public:
        int c;
    protected:
        int a;
    private:
        int b;
};

class derived: protected base{
    public:
         void display(int x ,int y,int z){
            c=x;
            a=y;
            b=z;//private cannot be accessed in chid class
         }

};

int main(){
    base b;
    derived d;
    cout<<d.a<<endl;//protected cannot be accessed from outsde the calss as well but can be accessed from inside the class
    cout<<d.c<<endl;
    cout<<d.b<<endl;//private cannot be accessed form outside the calss

    return 0;

}

