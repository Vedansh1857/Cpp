#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void print_data(void)
    {
        cout << "The numbers are : (" << a << "," << b << ")" << endl;
    }
};

int main()
{
    complex c1;
    c1.print_data();
    complex c2(5);
    c2.print_data();
    complex c3(4,6);
    c3.print_data();
    return 0;
}