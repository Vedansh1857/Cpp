#include <iostream>
using namespace std;

// Base class...
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1(void)
{
    return data1;
}

int base ::getdata2(void)
{
    return data2;
}

// Derived class...
class derived : private base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process(void)
{
    setdata();
    data3 = data2 * getdata1();
}

void derived ::display(void)
{
    cout << "Value of data1 is : " << getdata1() << endl;
    cout << "Value of data2 is : " << data2 << endl;
    cout << "Value of data3 is : " << data3 << endl;
}

int main()
{
    derived der;
    // der.setdata();
    der.process();
    der.display();
    return 0;
}