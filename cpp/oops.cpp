#include<iostream>
using namespace std;

class employee
{
private:
    /* data */
    int a,b,c;
public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
        cout<<"The value of d is : "<<d<<endl;
        cout<<"The value of e is : "<<e<<endl;
    }
};

void employee::setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee vedansh;
    vedansh.d=89;
    vedansh.e=32;
    vedansh.setdata(1,2,3);
    vedansh.getdata();
    return 0;
}