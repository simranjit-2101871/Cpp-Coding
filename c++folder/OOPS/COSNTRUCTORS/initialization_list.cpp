/*Initialization list in Constructors in C++
The initialization list in constructors is another concept of initializing the data members of the class. The syntax of the initialization list in 
constructors is shown below.
*/
#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}



//Main Points

//The main thing to note here is that if we use the code shown below to initialize data members the compiler will throw an error because the data 
//member “b” is being initialized first and the “a” is being initialized second so we have to assign the value to “b” data member first.
Test(int i, int j) : b(j), a(i+b)


//Initialization list in Constructors Example 1

//But if we use the code shown below to initialize data members the compiler will not throw an error because the data member “a” is being initialized
//first and we are assigning the value to the data member “a” first.
Test(int i, int j) : a(i), b(a + j)