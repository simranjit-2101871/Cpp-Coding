//LIKE CLASSES ADVERTISMENT CAN BE USED WITH FUCNTIONS ALSO, FUNCTION TEMPLATE
//CHALO rk example lo
//AVERAGE NIKAL CHAL
/*#include<iostream>
using namespace std;
 
float funcAverage(int a, int b){
    float avg= (a+b)/2.0; 
    return avg;
}
int main(){
    float a;
    a = funcAverage(5,2);
    printf("The average of these numbers is %f",a);
    return 0;
}
*/
//ab agar function ke argument ke datatype change karne hain toh new function form karna padega,here we can use function template

//NOW TEMPLATE
/*#include<iostream>
using namespace std;

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0; 
    return avg;
}

int main(){
    float a;
    float b;
    a = funcAverage(5,2);
    b = funcAverage(5,2.8);
    cout<<"The so called average is"<<a<<" "<<b<<endl;
    return 0;
}
*/





//FUNCTION TEMPLATE overlaod
#include <iostream>
using namespace std;
 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main()
{
    func(4);  //Exact match takes the highest priority
    return 0;
}
/*If we hadn’t created the first function with int data type,  the call would have gone to the templatised func only because a template function is 
an exact match for every kind of data type. */