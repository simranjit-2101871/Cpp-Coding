/*Why Object-Oriented Programming?
Before we discuss object-oriented programming, we need to learn why we need object-oriented programming?

1.) C++ language was designed with the main intention of adding object-oriented programming to C language
2.) As the size of the program increases readability, maintainability, and bug-free nature of the program decrease.
3.) This was the major problem with languages like C which relied upon functions or procedure (hence the name procedural programming language)
4.) As a result, the possibility of not addressing the problem adequately was high
5.) Also, data was almost neglected, data security was easily compromised
6.) Using classes solves this problem by modeling program as a real-world scenario

Difference between Procedure Oriented Programming and Object-Oriented Programming

Procedure Oriented Programming
1. Consists of writing a set of instruction for the computer to follow
2. The main focus is on functions and not on the flow of data
3. Functions can either use local or global data
4. Data moves openly from function to function

Object-Oriented Programming
1. Works on the concept of classes and object
2. A class is a template to create objects
3. Treats data as a critical element
4. Decomposes the problem in objects and builds data and functions around the objects

Basic Concepts in Object-Oriented Programming
Classes - Basic template for creating objects
Objects – Basic run-time entities
Data Abstraction & Encapsulation – Wrapping data and functions into a single unit
Inheritance – Properties of one class can be inherited into others
Polymorphism – Ability to take more than one forms
Dynamic Binding – Code which will execute is not known until the program runs
Message Passing – message (Information) call format

Benefits of Object-Oriented Programming
Better code reusability using objects and inheritance
Principle of data hiding helps build secure systems
Multiple Objects can co-exist without any interference
Software complexity can be easily managed


WHAT ARE THE 4 PILLARS OF OOPS 
1.) ABSTRACTION-->An abstraction is a form of simplification and organization, allowing developers to focus on the essential parts of their code 
    without focusing on the implementation details. It helps developers create code in a more efficient manner, while still providing the same 
    functionality.

2.) ENCAPSULATION-->Encapsulation is the process of combining data and codes into a single unit. It helps keep code organized, as well as helps 
    prevent accidental data manipulation and changes

3.) INHERITANCE-->Inheritance is the process of creating new classes based on an existing class. It allows the developer to create subclasses that 
    will inherit the attributes and behaviors of the parent class. This makes it easy to reuse code, making development faster and more efficient.
        Extension of Functionality: Derived classes can add new members or modify inherited members to tailor them to specific needs, enhancing the 
        functionality provided by the base class.

        Code Reuse: Derived classes inherit the members (both variables and functions) of the base class, reducing code duplication and promoting the 
        DRY (Don't Repeat Yourself) principle.
*/
#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    int speed;

public:
    Vehicle(int s) : speed(s) {}

    void displaySpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Derived class inheriting from Vehicle
class Car : public Vehicle {
private:
    int mileage;

public:
    Car(int s, int m) : Vehicle(s), mileage(m) {}

    void displayMileage() {
        cout << "Mileage: " << mileage << " km/l" << endl;
    }
};

int main() {
    // Creating an object of derived class Car
    Car myCar(120, 15);

    // Accessing inherited member function
    myCar.displaySpeed(); // Output: Speed: 120 km/h

    // Accessing derived class member function
    myCar.displayMileage(); // Output: Mileage: 15 km/l

    return 0;
}

/*
Code reuse is demonstrated through inheritance (Car inherits speed and displaySpeed from Vehicle), avoiding duplication of the speed variable and 
its display functionality.
The derived class (Car) extends the functionality by adding specific attributes (mileage) and behaviors (displayMileage), while leveraging the existing
functionality from the base class (Vehicle).



4,) POLYNORPISM-->Finally here in the Four pillars of OOPs, polymorphism is a form of abstraction that allows different classes to fulfill the 
    same behavior. By taking advantage of polymorphism, developers can create code that is more easily maintained and more versatile.
        Polymorphism allows for function overloading, function overriding, and dynamic binding, enabling flexible and adaptable code that can work 
        with objects of different types at runtime. These features collectively enhance the flexibility, maintainability, and scalability of 
        object-oriented programs in C++.
*/