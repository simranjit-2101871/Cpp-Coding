//So here template is not the tempalte used for advertising isntead it is A template is believed to escalate the potential of C++ several fold by giving it the ability to define data types as parameters making it useful to reduce repetitions of the same declaration of classes for different data type
//Classes behave as  a template for object 

//so need for advertisment ,because of dry rule and generin programming 
//Template of a class aslo called paramterized class,eample below

/*#include<iostream>
using namespace std;

template<class T>
class vecto{
    T *arr;
    int size;
    public:
        vecto(T *arr){
            //whatever just passing time
        }
        // and other usless stuff
};

int main(){
    vecto<int> my1();
    vecto<float> my2();
    return;
}
*/




//SO SECOND EXAMPLE,FIND DOT PRODUCT
/*#include<iostream>
using namespace std;

class dotnikalo{
    public:
        int *arr;
        int size;
        dotnikalo(int m){
            size=m;
            arr=new int[size];
        }

        int productnikalo(dotnikalo &v){
            int d=0;
            for(int i=0;i<size;i++){
                d+=this->arr[i]*v.arr[i];
            }
            return d;
        }
};

int main(){
    dotnikalo v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    dotnikalo v2(3); //vector 2
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;

    int a =v1.productnikalo(v2);
    cout<<a<<endl;
    return 0;
}
*/


    //template walla code of  the dot product
#include<iostream>
using namespace std;

template<class T>
class dotnikalo{
    public:
        T *arr;
        int size;
        dotnikalo(int m){
            size=m;
            arr=new T[size];
        }

        int productnikalo(dotnikalo &v){
            T d=0;
            for(int i=0;i<size;i++){
                d+=this->arr[i]*v.arr[i];
            }
            return d;
        }
};

int main(){
    dotnikalo<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 2.3;
    v1.arr[2] = 0.1;

    dotnikalo<float> v2(3); //vector 2
    v2.arr[0]=0.1;
    v2.arr[1]=2.0;
    v2.arr[2]=1.1;

    int a =v1.productnikalo(v2);
    cout<<a<<endl;
    return 0;
}

