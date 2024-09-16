//VISIBILTY MODE INFORMATION BASICALLY
/*
1.) Default visibility mode is private
2.) Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3.) Private Visibility Mode: Public members of the base class become private members of the derived class
4.) Private members are never inherited
*/

/*#include<iostream>
using namespace std;

class employee{
    public:
        int id;
        float salary;
        employee(int in){
            id=in;
            salary=39.0;
        }
        employee(){}
};

//ab banao derived class 
class network_engineer : public employee{
    public:
        int network;
        network_engineer(int a){
            id=a;
            network = 4;
        }

    void getdata(){
        cout<<id<<endl;
    
    }

};

int main(){
    employee simran(1),malhi(2);
    cout<<simran.salary<<endl;
    cout<<malhi.salary<<endl;


    network_engineer skill(10);
    cout<<skill.network<<endl;
    cout<<skill.id<<endl;
    skill.getdata();
    return 0;

    
}
*/





//DEEP DIVE INTO INHERITENCE
/*#include<iostream>
using namespace std;
class base{
    int data1;
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};

void base :: setdata(void){
    data1=10;
    data2=13;
}

int base :: getdata1(void){
    return data1;
}

int base :: getdata2(void){
    return data2;

}

class derived : public base{
    int data3;
    public:
        void process();
        void display();
};


void derived :: process(){
    data3=data2*getdata1();

}

void derived :: display(){
    cout << "Value of data 1 is " << getdata1() << endl;//cannot access the private members of the base class so fucntion is used here to print the data
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;

}


int main(){
    derived obj;
    obj.setdata();
    obj.process();
    obj.display();

    return 0;
}
*/






//EXPERIMENT-using the same the fucntions name and varaibles and then see what happens
#include<iostream>
using namespace std;
class tommy {
    public:
        int a;
        int b;
        void setkaro(){
            a=10;
            b=120;
        }
        void display(){
            cout<<"The value of a="<<a<<endl<<"The value of b="<<b<<endl;
        }
};//i got something int he terminal when i execute this programm in the terminal should read about that

class jerry: public tommy{
        public:
        int a;
        int b;
        /*void setkaro(){
            a=20;
            b=11400;
        }
        void display(){
            cout<<"The value of a="<<a<<endl<<"The value of b="<<b<<endl;
        }*/
};
int main(){
    //base class object
    /*tommy ty;
    ty.setkaro();
    ty.display();
    
    //no abiguity occured it gave prefernce to the base calss variables


    //case2: base class object but fucntion is not given
    ty.setkaro();//error not declared in the scope
    

    //case3: derived class object 
    jerry jy;
    jy.setkaro();
    jy.display();//derived one got executed
    */

    //case4:derived class object but function not declared
    jerry jy;
    jy.setkaro();
    jy.display();//base one got executed

    //now in future files we will find a way if we can call the base the base class fucntions even if those same faunations are theri in the derived 
    //class ,in a sceanrio where variables and fucntions of both class are same and object is of derived class and also a case where object is of base 
    //class

    return 0;
}






