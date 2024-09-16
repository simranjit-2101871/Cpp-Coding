//Multilevel inheritence case
/*
Base Default Constructor Call:
The default constructor of the Base class is called first because it is the base class.
If the Base class did not have a default constructor, a compilation error would occur.

Intermediate Default Constructor Call:
After the Base class is constructed, the default constructor of the Intermediate class is called.
If the Intermediate class did not have a default constructor, a compilation error would occur.

Derived Constructor Call:
Finally, the Derived class constructor is called with the provided arguments.
*/
#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) {
        cout << "Base class constructor called with value " << x << endl;
    }
    Base() {
        cout << "Base class default constructor called" << endl;
    }
};

class Intermediate : public Base {
public:
    Intermediate(int x, int y) {
        cout << "Intermediate class constructor called with value " << y << endl;
    }
    Intermediate() {
        cout << "Intermediate class default constructor called" << endl;
    }
};

class Derived : public Intermediate {
public:
    Derived(int x, int y, int z) {
        cout << "Derived class constructor called with value " << z << endl;
    }
    Derived() {
        cout << "Derived class default constructor called" << endl;
    }
};

int main() {
    Derived obj(1, 2, 3);
    return 0;
}


//Wheni get finishe d with virtual base concept then i wiil come back for this part also