//ASSGIGINH MULTIPLE PARAMETERS TO THE TEMPLATE
/*#include<iostream>
using namespace std;

template<class T1,class T2>
class eknayinclass{
    public:
        T1 data1;
        T2 data2;
        eknayinclass(T1 A,T2 B){
            data1=A;
            data2=B;
        }
        void display(){
        cout<<this->data1<<" "<<this->data2;
    }
};
int main()
{
    eknayinclass<int, char> obj(1, 'c');
    obj.display();
    return 0;
}
*/



//DEFAULT PARAMETERS -->These will work if donot assign any dattype at the time of forming object of a class
/*#include<iostream>
using namespace std;
 
template <class T1=int, class T2=float, class T3=char>
class malhi{
    public:
        T1 a;
        T2 b;
        T3 c;
        malhi(T1 x, T2 y, T3 z) {
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
        
};
int main()
{
    malhi<> h(4, 6.4, 'c');
    h.display();
    cout << endl;
    malhi<float, char, char> g(1.6, 'o', 'c');
    g.display();
    return 0;
}
*/