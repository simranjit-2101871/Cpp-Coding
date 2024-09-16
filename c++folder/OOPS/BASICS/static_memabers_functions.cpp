/*Static Data Members in C++
When a static data member is created, there is only a single copy of the data member which is shared between all the objects of the class. As we 
have discussed in our previous lecture that if the data members are not static then every object has an individual copy of the data member and it 
is not shared.



Static Methods in C++
When a static method is created, they become independent of any object and class. Static methods can only access static data members and static 
methods. Static methods can only be accessed using the scope resolution operator
*/

//CODE EXAMPLE
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}

/*
    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
        
        why is this neede
        
        Declaration vs Definition in C++

Declaration:
When you declare a static member variable inside the class (static int count;), you are telling the compiler that such a variable exists as a part
of the class Employee. This is similar to declaring a function prototype — it informs the compiler about the type and scope of the variable.

Definition:
To actually allocate memory for the static member variable, you need to provide a definition outside the class definition (int Employee::count;). 
This definition specifies where the memory for count will be reserved. Without this definition, the compiler won’t allocate storage for count, 
leading to linker errors if you try to use it.

Why It Needs Definition:
Memory Allocation: 
Unlike non-static member variables, which are allocated separately for each object of the class, static member variables are 
shared among all instances of the class. Therefore, they need to be allocated memory separately from the instances of the class.

Initialization: 
By defining int Employee::count;, you also specify its initial value (0 by default if not explicitly initialized). This initialization 
is crucial because static variables need a defined initial state before they can be used.
        
        
*/