//Array of Objects Using Pointers in C++

/*Array of objects can be defined as an array that’s each element is an object of the class. In this tutorial, we will use the pointer to store the
 address of an array of objects.  An example program is shown below to demonstrate the concept of an array of objects using pointers.
 */

#include<iostream>
using namespace std;

class shopitem{
    public:
        int id;
        float price;
    
        void setdata(int a ,float b){
            id=a;
            price=b;
        }
        void gaetdata(void){
            cout<<"Code of this item is"<<id<<endl;
            cout<<"Price of this item is"<<price<<endl;
        }
};

int main(){
    int size=3;
    shopitem *ptr=new shopitem[size];
    shopitem *ptrtemp=ptr;
    int p,i;
    float q;
    for(int i=0;i<size;i++){
        cout<<"Enter id and price of item"<<i+1<<endl;
        cin>>p>>q;
        //(*ptr).setdata(p,q);
        ptr->setdata(p,q);
        ptr++;
    }
    cout<<ptrtemp->id;//use to access a varable from the class
    /*   for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    */
    return 0;
    
}

