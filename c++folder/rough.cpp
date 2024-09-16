/*#include <iostream>
#include <string>

int main() {
    bool validInput = false;
    int number;

    while (!validInput) {
        std::cout << "Please enter a number: ";
        std::string userInput;
        std::cin >> userInput;

        if (std::all_of(userInput.begin(), userInput.end(), ::isdigit)) {
            number = std::stoi(userInput);
            validInput = true;
        } else {
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
        }
    }

    std::cout << "You entered: " << number << std::endl;

    return 0;
}*/


//CODE TO FIND A SPECIFIC NUMBER IS PRIME OR NOT
/*#include<iostream>
using namespace std;
int main(){
    int n=34;
    int isprime;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            isprime=0;
        }
        if(isprime){
            cout<<"the number is prime"<<endl;
        }
        else{
            cout<<"The number is not prime"<<endl;
        }
        
    }
    return 0;
}*/


//CODE TO FIND A SEQUENCE OF PRIME NUMBER IN ARRAY//
//PENDING//

//ACCESS MODIFIER//
/*#include<iostream>
using namespace std;
class tom{
    private:
        int a,b,c;
    public:
        void set(int a,int b,int c){
            
            cout<<"Print the number "<<a<<endl;
            cout<<"Print the number "<<b<<endl;
            cout<<"Print the number "<<c<<endl;
            
        }

       
};

int main(){
    tom harry;
    int a=2;
    int b=3;
    int c=3;
    cout<<"a="<<a<<", b="<<b<<", c="<<c<<endl;
    
    harry.set(2,2,2);
   
    return 0;
}*/



//THE TWO X ARE SMAE OR NOT//
/*#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        // This initializes intValue when an object is created.
        intValue = 0;
    }

    // Member function
    void setValues() {
        // This initializes x inside the member function when it is called.
        x = 42;
    }

    // Member function to display values
    void displayValues() {
        std::cout << "intValue: " << intValue << ", x: " << x << std::endl;
    }

public:
    int intValue;
    int x; // Member variable declared in the class
};

int main() {
    MyClass obj; // Creates an object of MyClass
    obj.x=2;
    cout<<"the value of x="<<obj.x<<endl;
    obj.setValues(); // Calls the setValues function
    obj.displayValues(); // This will print intValue: 0, x: 42
    return 0;
}*/



//can static function be decalred outside the main function//
/*#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
        void setdata(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"The id of this employee is"<<id<<"and this is employee number"<<count<<endl;
        }
        static void getcount(void){
            cout<<"The value of count is"<<count<<endl;
        }
};
int employee::count;
int main(){
    employee simran, maan, rajat;
    simran.setdata();
    simran.getdata();
    employee::getcount();

    maan.setdata();
    maan.getdata();
    employee::getcount();

    rajat.setdata();
    rajat.getdata();
    employee::getcount();
    return 0;
    
}*/
/*
#include<iostream>
using namespace std;
class A{
    public:
        int set(){
            cout<<"Derived funciton A"<<endl;
    }
};

class B:  public A{
    public:
        int set(){
            cout<<"Derived function B"<<endl;
    }

};
class C: public A{
    public:
        int set(){
            cout<<"derived class C"<<endl;
        }
};

class D:public B,public C{
    public:
}
int main(){
    D obj;
    obj.set();
    return 0;
}
*/


#include<iostream>
using namespace std;
 

void findWaitingTime(int processes[], int n, 
                          int bt[], int wt[])
{
   
    wt[0] = 0;
 
    for (int  i = 1; i < n ; i++ )
        wt[i] =  bt[i-1] + wt[i-1] ;
}
 

void findTurnAroundTime( int processes[], int n, 
                  int bt[], int wt[], int tat[])
{
   
    for (int  i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];
}
 

void findavgTime( int processes[], int n, int bt[])
{
    int wt [n] , tat [n] , total_wt = 0, total_tat = 0;
 
    
    findWaitingTime(processes, n, bt, wt);
 
    
    findTurnAroundTime(processes, n, bt, wt, tat);
 
    
    cout << "Processes  "<< " Burst time  "
         << " Waiting time  " << " Turn around time\n";
 
    
    for (int  i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "   " << i+1 << "\t\t" << bt[i] <<"\t    "
            << wt[i] <<"\t\t  " << tat[i] <<endl;
    }
 
    cout << "Average waiting time = "
         << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_tat / (float)n;
}
 
// Driver code
int main()
{
    
    int processes[] = { 1, 2, 3};
    int n = sizeof processes / sizeof processes[0];
 
    
    int  burst_time[] = {10, 5, 8};
 
    findavgTime(processes, n,  burst_time);
    return 0;
}


