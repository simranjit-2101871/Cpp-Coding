//use of end of line fucntion EOF() will be xwcuted using a loop

/*The member function open is used to connect the text file to the C++ program when passed into it.
Understanding the snippet below:

1.) Unlike what we did earlier passing the text file in the object while creating it, we’ll first just declare an object out(any name you wish) of 
2.) the type ofstream and use its open method to open the text file in the program.
3.) We’ll pass some string lines to the text file using the out operation.
4.) We’ll now close the file using the close function. Now closing is explicitly used to make the system know that we are done with the file. 
5.) It is always good to use this.
*/

#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
 
    // declaring an object of the type ofstream
    ofstream out;
 
    //connecting the object out to the text file using the member function open()
    out.open("testing3.txt");
 
    //writing to the file
    out <<"tomm tomm tomm \n";
    out <<"jerry jerry jerry";
    //closing the file connection
    out.close();
    
// declaring an object of the type ifstream
    ifstream in;
    //declaring string variable st
    string st;
    //opening the text file into in
    in.open("testing3.txt");
 
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0) 
    {
        // using getline to fill the whole line in st
        //getline(in,st);
        cout<<st<<endl;
    }
    return 0;


}
