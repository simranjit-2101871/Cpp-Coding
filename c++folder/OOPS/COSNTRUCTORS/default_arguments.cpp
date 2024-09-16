//I will not define it lets just see the practial observation and differnce between defaut cosntructor and default type arguments
//Defalut arguments


/* Default arguments of the constructor are those which are provided in the constructor declaration. If the values are not provided when calling 
the constructor the constructor uses the default arguments automatically. An example program to demonstrate the concept default arguments in C++ 
is shown below.*/

/*#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b=9, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();

};

void Simple :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
}
int main(){
    Simple s(12, 13);
    s.printData();
    return 0;
}

*/



//DEFALUT CONSTRUCTOR
#include<iostream>
using namespace std;

class cons{
    public:
        int a,b;
        cons(void);//this is called default constructor where no arguments is given
        cons(int x,int y){
            cout<<"Executed"<<endl;
        }
        
        void numberprintkar(){
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
};
cons::cons(void){
    a=10;
    b=10;
    cout<<"Constructor executed"<<endl;
}

//here the main function starts
int main(){
    cons c,d,v(2,3);//so the cosntrucotr is executed for each object means here it is 3 times,values are intialized to each object(a and b values)
    c.numberprintkar();
    return 0;
}
