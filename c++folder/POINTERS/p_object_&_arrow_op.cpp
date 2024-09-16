/*Benefits of Dynamically Allocating Objects

Flexible Memory Management:
Dynamic allocation allows you to allocate memory during runtime, which provides flexibility in managing resources. This is especially useful when 
the size or number of objects needed cannot be determined at compile time.

Heap Allocation:
Dynamically allocated objects are stored on the heap, which has a larger size limit compared to the stack. This allows for the creation of large 
objects or a large number of objects.

Persistence Beyond Scope:
Dynamically allocated objects can persist beyond the scope in which they were created. This is useful for objects that need to be accessible across
different parts of the program or for the entire lifetime of the application.

Avoiding Stack Overflow:
Since the stack has a limited size, creating large objects or many objects on the stack can lead to stack overflow. Allocating objects on the heap 
avoids this issue.


Benefits of Statically Allocating Objects

Simplicity:
Statically allocated objects are simpler to manage as they are automatically created and destroyed. You don't need to explicitly deallocate memory,
reducing the risk of memory leaks.

Performance:
Stack allocation is generally faster than heap allocation because the memory allocation process for the stack is simpler and more efficient.

Automatic Lifetime Management:
Statically allocated objects are automatically destroyed when they go out of scope, making it easier to manage their lifetimes without manual 
intervention.
*/



//POINTER TO OBJECT
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54); is exactly same as
    (*ptr).getData(); is as good as 

    return 0;
}




//ARROW OPERATOR
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;
    ptr->setData(1, 54);
    ptr->getData(); 

    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 4); 
    ptr1->getData();
    return 0;
}

//arrow operator is just the simpler aprach of derfrencing the pointer
