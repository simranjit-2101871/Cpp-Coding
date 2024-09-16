/*‘this’ Pointer in C++
“this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the member function. An example program is shown 
below to demonstrate the concept of “this” pointer.
*/

//EXMAPLE CODE
#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}

//RETRUNING OBJECT USING THIS
#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A & setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(4).getData();
    //a.getData();
    return 0;
}

