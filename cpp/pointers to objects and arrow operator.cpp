#include<iostream>
using namespace std;

class complex
{
    int real,imaginary;
    public:
        void setData(int a,int b){
            real = a;
            imaginary = b;
        }

        void getData(void){
            cout<<"The value of real part is : "<<real<<endl;
            cout<<"The value of imaginary part is : "<<imaginary<<endl;
        }
};

int main()
{
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    // (*ptr).setData(10,20); // is exactly same as...
    ptr -> setData(10,20);

    // (*ptr).getData();
    //  OR...
    ptr -> getData();
    return 0;
}