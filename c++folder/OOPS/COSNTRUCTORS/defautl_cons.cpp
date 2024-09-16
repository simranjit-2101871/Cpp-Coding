//Cosntructors are fucntions having same name as that of class in which it is declared
//cosntructors are envoked as soon as the objects are intialized

//IMPORTANCE CHARACTERSTICS OF COSNTRUCOTRS
/*1.) A constructor should be declared in the public section of the class
2.) They are automatically invoked whenever the object is created
3.) They cannot return values and do not have return types
4.) It can have default arguments
5.) We cannot refer to their address
*/


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