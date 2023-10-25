#include<iostream>
using namespace std;

// Class templates with multiple parameters(Maybe one , two , or more)...
template<class T1 , class T2> // (Comma separated)
class myClass{
    public:
        T1 data1;
        T2 data2;

        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<this->data1<<" "<<this->data2<<endl;
        }
};

int main()
{
    myClass<int,float> obj(1,1.28);
    obj.display();
    return 0;
}