#include<iostream>

int main(){
    std::cout<<"MY FIRST CODE"<<endl;
    return 0;
}

//OR

#include<iostream>
using namespace std;

int main(){
    cout<<"SECOND WAY OF WRITING THE CODE"<<endl;
    reutrn 0;
}

/*
1. Let's start with the 1st line of code "#include<iostream>" - this whole text is called a header file.
In this line of code include is a keyword used to add libraries in our program. "iostream" is the name of a library, added to our program. T
he iostream library helps us to get input data and show output data. The iostream library also has many more uses;

2. One more thing to consider here is that the 2nd line of code is blank; there is no code written. The thing to consider here is that it doesn't 
matter how many lines you have left empty in a C++ program, the compiler will ignore those lines and only check the ones with the code.


3. Now onto the 3rd line of code "int main() {" - In this line of code, "int" is a return type which is called integer and "main()" is a function, 
the brackets "()" denotes that it is a function. The curly brace "{" indicates that it is an opening of a function, and the curly brace "}" indicates 
that it is the closing of a function
 
4. Now let's talk about the 4th line of code 'std::cout<<" hello world";' - In this line of code "std" is a namespace, "::" is the scope resolution
 operator and "cout<<" is a function which is used to output data, "hello world" is our output string and ";" is used to end a statement. The code 
 "std::cout" tells the compiler that the "cout" identifier resides in the std namespace or directly use namespace std. 

5. Now let's talk about the 5th line of code "return 0" - In this line of code, the return keyword will return 0 as an integer to our main function
"int main()" as we have discussed before. Returning 0 as a value to the main function means successful termination of the program.
*/