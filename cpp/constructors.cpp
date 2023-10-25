#include<iostream>
using namespace std;

// Creating a Constructor
// Constructor is a special member function with the same name as of the class.
// It is used to initialize the objects of its class
// It is automatically invoked whenever an object is created

class complex
{
    private:
        int a,b;
    public:
        complex(void); // constructor declaration...
        void printData(void)
        {
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex(void) // ----> This is a default constructor as it takes no parameters
{
    a=10;
    b=20;
    cout<<"Hello world"<<endl;
}

int main()
{
    complex c1,c2,c3;
    c1.printData();
    c2.printData();
    c3.printData();
    return 0;
}

/*
properties of constructors...

1. It should be declared in the public sewction of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address. 
*/