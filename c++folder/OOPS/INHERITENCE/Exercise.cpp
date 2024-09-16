//MY CODE OF CREATING THE CALCULATOR 
/*#include<iostream>
using namespace std;

class calcualtor{
    public:
        int a,b,c,result;
        void calculate(){
            cout<<"give the inputs for a,b and c"<<endl;
            cin>>a>>b>>c;
            if(c==1){
                result=a+b;
            }
            if(c==2){
                result=a*b;
            }
        }

        void display(){
            cout<<"THE RESULT IS="<<result<<endl;
        }
};

class scientificcalcualtor{
    public:
        int x,y,z,resul;
        void calculate2(){
            cout<<"give the inputs for x,y and z"<<endl;
            cin>>x>>y>>z;
            if(z==1){
                resul=x/y;
            }
            if(z==2){
                resul=x%y;
            }
        }

        void display(){
            cout<<"THE RESULT IS="<<resul<<endl;
        }
};

class hybridcalcualtor :public calcualtor,public scientificcalcualtor{
    public:
        void display(){
            cout<<"THE RESULT IS="<<result<<endl;
            cout<<"THE RESUL IS="<<resul<<endl;
        }

    
};


int main(){
    calcualtor ca;
    scientificcalcualtor sc;
    hybridcalcualtor hy;

    hy.calculate();
    hy.calculate2();
    hy.display();

    return 0;
}
*/




//SOLUTION CODE
class SimpleCalculator {
    int a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};

class ScientificCalculator{
    int a, b;

    public:
        void getDataScientific()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;
        }

        void performOperationsScientific()
        { 
            cout << "The value of cos(a) is: " << cos(a) << endl;
            cout << "The value of sin(a) is: " << sin(a) << endl;
            cout << "The value of exp(a) is: " << exp(a) << endl;
            cout << "The value of tan(a) is: " << tan(a) << endl;
        }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};

int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    return 0;
}



/*Questions to be asked on the basis of  the above programmm
Q1. What type of Inheritance are you using?
A1. Wea re using multiple inheritence

Q2. Which mode of Inheritance are you using?
A2. public mode in every class

Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator
A3. Done through the code already

Q4. How is code reusability implemented?
A4. Encapsulation of Methods: Each calculator class encapsulates methods related to its functionality. The SimpleCalculator class has methods for 
    basic arithmetic operations, while the ScientificCalculator class has methods for scientific calculations. This separation of concerns makes the 
    code modular and easier to maintain.

    By inheriting from SimpleCalculator and ScientificCalculator, HybridCalculator can use the methods defined in both these classes without having
    to redefine them. This allows code reuse, as methods from the parent classes can be used directly.
*/