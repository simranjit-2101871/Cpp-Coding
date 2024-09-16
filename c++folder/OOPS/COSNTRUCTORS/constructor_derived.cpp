/*Constructors in Derived Class in C++
1.) We can use constructors in derived classes in C++
2.) If the base class constructor does not have any arguments, there is no need for any constructor in the derived class
3.) But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor
4.) If both base and derived classes have constructors, base class constructor is executed first
5.)Constructors in Multiple Inheritances



In multiple inheritances, base classes are constructed in the order in which they appear in the class deceleration. For example if there are three 
classes “A”, “B”, and “C”, and the class “C” is inheriting classes “A” and “B”. If the class “A” is written before class “B” then the constructor 
of class “A” will be executed first. But if the class “B” is written before class “A” then the constructor of class “B” will be executed first.
In multilevel inheritance, the constructors are executed in the order of inheritance. For example if there are three classes “A”, “B”, and “C”, 
and the class “B” is inheriting classes “A” and the class “C” is inheriting classes “B”. Then the constructor will run according to the order of 
inheritance such as the constructor of class “A” will be called first then the constructor of class “B” will be called and at the end constructor 
of class “C” will be called.*/



/*Special Case of Virtual Base Class

1.) The constructors for virtual base classes are invoked before a non-virtual base class
2.) If there are multiple virtual base classes, they are invoked in the order declared
3.) Any non-virtual base class are then constructed before the derived class constructor is executed
*/

#include<iostream>
using namespace std;
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;

    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void printDataBase2(void){
            cout << "The value of data2 is " << data2 << endl;
        }
};

class Derived: public Base2, public Base1{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
        {
            derived1 = c;
            derived2 = d;
            cout<< "Derived class constructor called"<<endl;
        }
        void printDataDerived(void)
        {
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};
int main(){
    //Derived harry;//(1, 2, 3, 4);error could no matching call
    Derived harry(1, 2, 3, 4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}





//NOW lets us take a case wher theire the cosntructor list is not available
/*
Default Constructors of Base Classes:
1.) Since no initializer list is provided, the default constructors of Base2 and Base1 are called automatically.
2.) However, in the provided Base1 and Base2 classes, there are no default constructors defined (i.e., constructors without parameters).

Compilation Error:
The compiler will generate an error because it cannot find default constructors for Base1 and Base2*/

class Base1 {
    public:
        Base1() {
            cout << "Base1 default constructor called" << endl;
        }
        Base1(int a) {
            cout << "Base1 constructor called with value " << a << endl;
        }
};

class Base2 {
    public:
        Base2() {
            cout << "Base2 default constructor called" << endl;
        }
        Base2(int b) {
            cout << "Base2 constructor called with value " << b << endl;
        }
};








//NOW lets take a case of virtual class vas non vritual base class costructor
/*Order of Initialization:

1.) Virtual base classes are always initialized before non-virtual base classes.
2.) Even though VirtualBase is listed last in the inheritance list, its constructor will be called first because it is a virtual base class.

Initialization Without Initializer List:
1.) If the VirtualBase constructor is not explicitly called in the initializer list, the compiler will attempt to call its default constructor.
2.) If VirtualBase does not have a default constructor, a compilation error will occur.
*/

class Base1 {
public:
    Base1(int a) {
        cout << "Base1 constructor called with value " << a << endl;
    }
};

class Base2 {
public:
    Base2(int b) {
        cout << "Base2 constructor called with value " << b << endl;
    }
};

class VirtualBase {
public:
    VirtualBase(int c) {
        cout << "VirtualBase constructor called with value " << c << endl;
    }
};


class Derived : public Base1, public Base2, public virtual VirtualBase {
    int derived1, derived2;
public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printDataDerived(void) {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

class Derived : public Base1, public Base2, public virtual VirtualBase {
    int derived1, derived2;
public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b), VirtualBase(c) {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printDataDerived(void) {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

/*Correct Initialization Order:
VirtualBase constructor is called with value 3.

VirtualBase constructor called with value 3
Base1 constructor is called with value 1.


Base1 constructor called with value 1
Base2 constructor is called with value 2.


Base2 constructor called with value 2
Derived class constructor is called.


Derived class constructor called
*/