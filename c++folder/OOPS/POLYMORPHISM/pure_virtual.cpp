//SO ABSTRACT class is a class wose whole purpose of creation is so that derived could be created and executed using it
//BASICALLY this onnly for the fucntion part ,so the fucntion  execution is made possible using pure virtual fucntion


//so lets take and exmaple of normal code where the virtual fucntion is used and derived class obj pointer,since the behavioure is altered so the 
//fucntions of derived is going to run instead of the base one
/*#include<iostream>
using namespace std;
class baseclass{
    public:
        int a;
        virtual void display(){
            cout<<"What is the marks of tommy"<<a<<endl;
        }
};

class derived:public baseclass{
    public:
        int b;
        // but the thing is defination of this function in derived calss is not provided so function of base calss will get executed
};
int main(){
    baseclass *pointer_base;
    baseclass ob1;
    derived ob2;
    ob2.b=3;
    pointer_base=&ob2;
    pointer_base->a=2;
    pointer_base->display();
    //so her nor we can call the fucntion of derived calss neither we can assign the value to derived calss variable
    
    return 0;
    //no output is given 
}
*/





//problem solved using pure virtual fucntion which makes it necesssary to retwrite the fucntion in derived class otherwise it throws an error
#include<iostream>
using namespace std;
class baseclass{
    public:
        int a;
        virtual void display()=0;
};

class derived:public baseclass{
    public:
        int b;
        void display(){
            cout<<"TOM AND JERRY"<<endl;
        }
};
int main(){
    baseclass *pointer_base;
    //baseclass ob1;// it also dont alow yout to declare base class object
    derived ob2;
    ob2.b=3;
    pointer_base=&ob2;
    pointer_base->a=2;
    pointer_base->display();
    //so her nor we can call the fucntion of derived calss neither we can assign the value to derived calss variable
    
    return 0;
    //no output is given 
}
//this not goinf to work with simple derived class obj pointer conscept




