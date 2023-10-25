#include<iostream>
using namespace std;

template<class T1=int,class T2=float,class T3=char>
class Vedu{
    public:
    T1 a;
    T2 b;
    T3 c;
    Vedu(T1 x,T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
    }
};

int main()
{
    Vedu<> v1(2,0.5,'V');
    v1.display();
    cout<<endl;
    Vedu<float,char,char> v2(6.4,'V','E');
    v2.display();
    return 0;
}