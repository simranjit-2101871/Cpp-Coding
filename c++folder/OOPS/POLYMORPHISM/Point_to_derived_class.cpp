#include<iostream>
using namespace std;

class simmi{
    public:
        int var1;
        void display(){
            cout<<"Display the content as you wish "<<endl;
        }

};

class malhi:public simmi{
    public:
        int var2;
        void display(){
            cout<<"Display the content of base or malhi class ok"<<endl;
        }

};
int main(){

    //POINTER OF BASE CLASS POINITNG TO OBJ OF DERIVED CLASS
    simmi *pointer_of_simmi;
    simmi ob_simmi;
    malhi ob_malhi;
    pointer_of_simmi=&ob_malhi;

    pointer_of_simmi->var1 = 34;
    pointer_of_simmi->display();
    
    //pointer_of_simmi->var2 = 134;//not possible since pointer is of base class
    
    //POINTER OF DERIVED CLASS TO DERIVED CLASS OBJECT
    malhi *pointer_of_malhi;
    pointer_of_malhi=&ob_malhi;
    pointer_of_malhi->var1=124;
    pointer_of_malhi->var2=134;
    pointer_of_malhi->display();



    //NOW POINTER OF DERIVED CLASS TO BASE CLASS OBJECT
    //malhi *pointer_of_malhi_1;
    //pointer_of_malhi_1=&ob_simmi;//not possible

    //POINTER OF BASE CLASS TO OBJECT OF BASE CLASS
    simmi *pointer_of_simmi_1;
    pointer_of_simmi_1=&ob_simmi;
    pointer_of_simmi_1->display();


    //NOW IF MULTIPLE POINTER IS GOING TO HAVE SAME NAME AND POINTING TO SAME OB THEN?
    /*simmi *pointer_of_simmi_1;
    pointer_of_simmi_1=&ob_simmi;
    pointer_of_simmi_1->display();
    */ //redeclaration not allowed

        //AND 
        /*simmi *pointer_of_simmi;
        pointer_of_simmi=&ob_simmi;
        pointer_of_simmi->display();
        */ //also not alowed
    return 0;
}