/*
The new keyword in C++ is used to allocate memory dynamically on the heap. When you use new, the memory for the array is allocated at runtime, 
rather than at compile time (as it would be with a statically allocated array). This is particularly useful when you do not know the size of the 
array until the program is running or if you need the array to persist outside the scope of a function.

Here is a breakdown of why new is used instead of the address operator (&):

Dynamic Memory Allocation:
new allows you to allocate memory during runtime. This means you can decide the size of your array based on user input or other runtime conditions.
Example: int *arr = new int[3]; allocates an array of 3 integers on the heap.

Flexibility:
Arrays allocated with new can be resized or deallocated as needed using delete or delete[], providing more flexibility than static arrays.
Example: delete[] arr; would deallocate the memory previously allocated for the array.

Persistence:
Memory allocated with new remains allocated until explicitly deallocated using delete. This is useful if you need the array to persist beyond the 
scope of a function.
Example: If you declare an array within a function and allocate it with new, it will not be destroyed when the function scope ends.
Using the address operator (&) with a statically allocated array does not provide the same level of control or flexibility.
*/


//FOR AN ARRAY
#include<iostream>
using namespace std;

int main(){
  
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;

    // Optionally set the pointer to nullptr to avoid dangling pointer issues
    arr = nullptr;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    return 0;
}




//FOR AN VARAIBLE
#include<iostream>
using namespace std;

int main(){
    
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;
    
    // Deleting the dynamically allocated memory
    delete p;

    // Optionally, set the pointer to nullptr to avoid dangling pointer issues
    p = nullptr;

    return 0;
}




//EXAMPLE 2 FOR ARRAY
#include<iostream>
using namespace std;

int main(){
    // Allocate an array of integers dynamically
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    // Initialize and print the array elements
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10;
        cout << "The value of arr[" << i << "] is " << arr[i] << endl;
    }

    // Deallocate the memory
    delete[] arr;

    return 0;
}
