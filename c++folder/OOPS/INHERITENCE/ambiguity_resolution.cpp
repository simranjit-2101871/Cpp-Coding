/*Ambiguity in inheritance can be defined as when one class is derived for two or more base classes then there are chances that the base classes have
functions with the same name. So it will confuse derived class to choose from similar name functions. To solve this ambiguity scope resolution operator
is used “::”. An example program is shown below to demonstrate the concept of ambiguity resolution in inheritance.
*/

//EXAMPLE CODE for multiple inheritence ambiguity
/*#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base2 :: greet();
    }
   //normally if there this class only had one parent then parent calss fucntion would have been called if the same fucniton was not present in 
   //this class ,but here are multiple fucntions and we dont complier dont konw which one to execute
};

int main(){
  // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived d;
     d.greet();

    return 0;
}
*/



//EXAMPPLE CODE FOR MULTILEVEL INHERITENCE AMBIGUITY
#include<iostream>
using namespace std;
class tommy {
    public:
        int a;
        int b;
        void setkaro(){
            a=10;
            b=120;
        }
        void display(){
            cout<<"The value of a="<<a<<endl<<"The value of b="<<b<<endl;
        }
};//i got something int he terminal when i execute this programm in the terminal should read about that

class jerry: public tommy{
        public:
        int a;
        int b;
        /*void setkaro(){
            a=20;
            b=11400;
        }
        void display(){
            cout<<"The value of a="<<a<<endl<<"The value of b="<<b<<endl;
        }*/
};


class wofy:public jerry{
    public:
        
        int a;
        int b;
        /*void setkaro(){
            a=20;
            b=1400;
        }
        void display(){
            cout<<"The value of a="<<a<<endl<<"The value of b="<<b<<endl;
        }*/


};
int main(){
    wofy wf;
    wf.setkaro();
    wf.display();
    return 0;
}
//no neede for ambiguity resolution because if function is not present int he child class then it will execute the funciton availble in mearest parent class
 



