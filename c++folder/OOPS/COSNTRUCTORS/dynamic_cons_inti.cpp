//so lets discuss a little about static and dynamic binding
/*Key Points About Static Binding and Function Signatures
1.) Function Name: The name of the function or method being called.
2.) Parameter Types: The types of the parameters that the function takes.
3.) Number of Parameters: The number of parameters that the function takes.

The combination of these elements forms the function signature, and this is what the compiler uses to resolve function calls during compilation.*/

/*What is Not Part of the Function Signature
Certain aspects are not part of the function signature:

1.) Return Type: The return type of the function is not part of the signature. This means you cannot overload functions based solely on differing 
    return types.
2.) Parameter Names: The names of the parameters are not part of the signature.
3.) Modifiers (e.g., const in some contexts): Some modifiers are not considered part of the signature in certain contexts, though const can affect
    member functions' signatures.
*/



//SO COSNTRUCTORS WILL BE BIND DTATICALLY BUT THE OBJECT INTIALIZATION IS DYNAMIC,HERES HOW IT IS

/*Function Signature Resolution: The compiler resolves which constructor to call based on the argument types and count during compilation. For 
example, BankDeposit(p, y, r) will call the constructor BankDeposit(int, int, float) if r is a float, and BankDeposit(int, int, int) if r is an 
integer.

Runtime Values: The specific values for p, y, r, and R are provided at runtime via cin, making the initialization dynamic.
*/

//CODE EXAMPLE

#include<iostream>
using namespace std;


class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){}
        BankDeposit(int p, int y, float r); // r can be a value like 0.04
        BankDeposit(int p, int y, int r); // r can be a value like 14
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnValue<<endl;
}

int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}


