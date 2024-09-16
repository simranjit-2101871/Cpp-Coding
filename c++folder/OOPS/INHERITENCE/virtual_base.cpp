/*The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances. For example: suppose we created
a class “Student” and two classes “Test” and “Sports”, are being derived from class “Student”. But once we create a class “Result” which is being derived
from class “Test” and “Sports”
*/
class student{
    public:
        int a;
        int b;
        void marks(){
            a=20;
            b=30;
        }
        void display(){
            cout<<"LETS SEE"<<endl;
        }
};

class sports : public class student{
    public:
        int x;
        int y;
        void marks(){
            x=100;
            y=300;
        }
        void display(){
            cout<<"LETS SEE 1"<<endl;
        }
};

class test: public class sports{
    public:
        int e;
        int f;
        void marks(){
            e=20;
            f=30;
        }
        void display(){
            cout<<"LETS SEE 2"<<endl;
        }
};

class  result : public class test,public class sports {
    public:
        int v;
        int y;
        void marks(){
            v=20;
            y=30;
        }
        void display(){
            cout<<"LETS SEE 3 4 5"<<endl;
        }
};