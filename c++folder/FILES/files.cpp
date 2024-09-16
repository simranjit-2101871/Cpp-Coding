/*The file is a patent of data which is stored in the disk. Anything written inside the file is called a patent, for example: “#include” is a patent. The text file is the combination of multiple types of characters, for example, semicolon “;” is a character.

The computer read these characters in the file with the help of the ASCII code. Every character is mapped on some decimal number. For example, 
ASCII code for the character “A” is “65” which is a decimal number. These decimal numbers are converted into a binary number to make them readable
 for the computer because the computer can only understand the language of “0” and “1”.

The reason that computers can only understand binary numbers is that a computer is made up of switches and switches only perform two operations
 “true” or “false”.
 */


//USINF CONSTRUCTORS
//EXAMPLE OF WRITING OPERATION
/*#include<iostream>
#include<fstream>
using namespace std;


int main(){
    string st="malhi don";
    ofstream out("testing.txt");
    out<<st;
    return 0;
}*/


/* 1.)We have created a string “st” which has a value “malhi Bhai”
2.)Object “out” is created of the type ofstream and the file “sample60.txt” is passed to it
3.)The string “st” is passed to object “out”
*/





//EXAMPLE OF READING OPERATION
/*#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st2;
    // Opening files using constructor and reading it
    ifstream in("testing.txt"); // Read operation
    //in>>st2;
    getline(in, st2);  
    cout<<st2;

    return 0;
}
*/




//USING FUNCTIONS LIKE CLOSE FUNCTION OR METHOD
#include<iostream>
#include<fstream>
 
using namespace std;
 
int main(){
 
              // connecting our file with hout stream
               ofstream hout("testing2.txt");
   
               // creating a name string variable and filling it with string entered by the user
              string name;
               cout<<"Enter your name: ";
              cin>>name;
     
             // writing a string to the file
             hout<<name + " is my name";
 
            // disconnecting our file
            hout.close();
            // connecting our file with hin stream
           ifstream hin("testing2.txt");
 
          // creating a content string variable and filling it with string present there in the text file
           string content;
            //hin>>content;
            //getline(hin,content);
           cout<<"The content of the file is: "<<content;
           
 
           // disconnecting our file
           hin.close();
           return 0;
}
