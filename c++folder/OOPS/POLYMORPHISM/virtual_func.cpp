//SO virtual function are bulit to alter the default behaviour of pointer to derived class object
//DEFAULT-->The fucntion of the base calss is called as pointer is pointing to derived calss but it is made in base calss
//ALTER-->by defining the function in   basecalss as virtual the fucntion of derived  class only be called .
//NOTE-->Since it is a conncept of runtime polymorphism so fucntion in base class and derived calss should have same name ,also the same named 
//fucnton should be define as virtual in base class as to that of derived class 


//THIS is the mormal functioning of the code
/*#include<iostream>
using namespace std;
class basecalss{
    public:
        int a;
        void display(){
            cout<<"What is the marks of tommy"<<a<<endl;
        }
};

class derived:public basecalss{
    public:
        int b;
        void display(){
            cout<<"What is the marks of tommy"<<a<<endl;
            cout<<"And also the marks of jerry"<<b<<endl;
        }
};
int main(){
    basecalss *pointer_base;
    basecalss ob1;
    derived ob2;
    pointer_base=&ob2;
    pointer_base->a=2;
    pointer_base->display();
    //so her nor we can call the fucntion of derived calss neither we can assign the value to derived calss variable
    
    return 0;
}
*/



//NOW SEE THE ALTER BEHAVIOURE USING VIRTUAL FUCNTION
#include<iostream>
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
        void display(){
            cout<<"What is the marks of tommy"<<a<<endl;
            cout<<"And also the marks of jerry"<<b<<endl;
        }
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
}
