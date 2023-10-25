#include<iostream>
using namespace std;

class number
{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    void show(void){
        cout<<"The number for this object is : "<<a<<endl;
    }
};

int main()
{
    number x = number();
    number y = number();
    number z = number(45);
    x.show();
    y.show();
    z.show();
    return 0;
}