/*We are going to cover two important concepts of C++ language:

Variables in C++
Comments in C++
Before explaining the concept of variables and comments, I would like to clarify two more ideas: low level and high level. To make it easy to understand, let's consider this scenario - when we go to Google search engine and search for some queries, Google displays us some websites according to our question. Google does this for us at a very high level. We don't know what's happening at the low level until we look into Google servers (at a low level) and further to the level where the data is in the form of 0s/1s. The point I want to make here is that low level means nearest to the hardware, and a high level means farther from the hardware with a lot of layers of abstraction


Variables in C++
Variables are containers to store our data. To make it easy to understand, I will give a scenario: to store water, we use bottles, and to store 
sugar, we use a box. In this scenario, the bottle and box are containers that are storing water and sugar; the same is the case with variables; 
they are the containers for data types. As there are many types of data types, for example, "int" is used for integers, the "float" is used for 
floating-point numbers, "char" is used for character, and many more data types are available, we will discuss them in upcoming lectures. The main 
point here is that these variables store the values of these data types. Figure 1 shows an example of a variable. "sum" is taken as an integer variable, 
which will store a value 6, and writing sum after the "cout" statement will show us the value of "sum" on the output window.

Variables in C++
Variables are containers to store our data. To make it easy to understand, I will give a scenario: to store water, we use bottles, and to store 
sugar, we use a box. In this scenario, the bottle and box are containers that are storing water and sugar; the same is the case with variables; 
they are the containers for data types. As there are many types of data types, for example, "int" is used for integers, the "float" is used for 
floating-point numbers, "char" is used for character, and many more data types are available, we will discuss them in upcoming lectures. The main 
point here is that these variables store the values of these data types. Figure 1 shows an example of a variable. "sum" is taken as an integer 
variable, which will store a value 6, and writing sum after the "cout" statement will show us the value of "sum" on the output window.
*/

#include<iostream>
using namespace std;

// This program was created by Code With Harry 
/* this
is 
a 
multi
line 
comment */
int main(){
    int sum = 6;
    cout<< "Hello world"<< sum;
    return 0;
}
