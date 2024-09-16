/*An array of Objects in C++
An array of objects is declared the same as any other data-type array.  An array of objects consists of class objects as its elements. If the array consists of class objects it is called an array of objects.*/
#include<iostream>
using namespace std;

class employee{
    public:
       int id;
       int salary;

    public:
        void setid(void){
            salary=122;
            cout<<"Enter the id of employee"<<endl;
            cin>>id;
        }
        void getid(void){
            cout<<"The id of the employee is"<<id<<endl;
        }
};
int main(){
    employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setid();
        fb[i].getid();
        cout<<fb[i].salary<<endl;
    }
    
    return 0;
}

/*Passing Object as Function Argument
Objects can be passed as function arguments. This is useful when we want to assign the values of a passed object to the current object.*/
#include<iostream>
using namespace std;
class complex{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}
