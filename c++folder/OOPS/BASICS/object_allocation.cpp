/*Objects Memory Allocation in C++
The way memory is allocated to variables and functions of the class is different even though they both are from the same class.

The memory is only allocated to the variables of the class when the object is created. The memory is not allocated to the variables when the class
 is declared. At the same time, single variables can have different values for different objects, so every object has an individual copy of all the
  variables of the class. But the memory is allocated to the function only once when the class is declared. So the objects don’t have individual 
  copies of functions only one copy is shared among each object.*/

  #include <iostream>

class Example {
public:
    // Class variables
    int var1;
    int var2;

    // Class function
    void display() {
        std::cout << "var1: " << var1 << ", var2: " << var2 << std::endl;
    }
};

int main() {
    // Creating objects of the Example class
    Example obj1;
    Example obj2;

    // Assigning values to the class variables for obj1
    obj1.var1 = 10;
    obj1.var2 = 20;

    // Assigning values to the class variables for obj2
    obj2.var1 = 30;
    obj2.var2 = 40;

    // Display values for obj1
    std::cout << "Object 1:" << std::endl;
    obj1.display();

    // Display values for obj2
    std::cout << "Object 2:" << std::endl;
    obj2.display();

    return 0;
}
/*
Assigning Values:
obj1's var1 is set to 10 and var2 to 20.
obj2's var1 is set to 30 and var2 to 40.

Function Call:
The display function is called for both obj1 and obj2.
The function display is only stored once in memory and shared among all objects of the Example class. However, it accesses the member variables 
specific to the object it is called upon.*/

