#include<iostream>
using namespace std;

int count = 0;
class number
{
    public:
    number(){
        count++;
        cout<<"This is the time when the constructor is called for object "<<count<<endl;
    }

    ~number(){
        cout<<"This is the time my destructor is called for object "<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"We are entering our main function"<<endl;
    cout<<"Creating our first object"<<endl;
    number n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more blocks"<<endl;
        number n2,n3;
        cout<<"Exiting this block"<<endl; 
    }
    cout<<"Back to main"<<endl;
    return 0;
}