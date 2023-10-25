/*#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
        complex(int,int); // constructor declaration...
        void printNumber(void)
        {
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex(int x, int y) // ----> This is a parameterized constructor as it accepts 2 parameters
{
    a=x;
    b=y;
    // cout<<"Hello world"<<endl;
}

int main()
{
    // Implicit call...
    complex a(4,6);
    a.printNumber();

    // Explicit call ...
    complex b = complex(5,7);
    b.printNumber();

    return 0;
}*/

// -----------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int, int);
    void printPoint(void)
    {
        cout << "The coordinates are : (" << x << "," << y << ")" << endl;
    }
};
point ::point(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    point p(4, 6);
    p.printPoint();
    point q(5, 9);
    q.printPoint();
    return 0;
}