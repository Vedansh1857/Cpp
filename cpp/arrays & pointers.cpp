#include<iostream>
using namespace std;

int main()
{
    // Array Example
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    marks[2] = 455;

    // Arrays & pointers...
    int *p = marks; // We will not use ampersand for arrays here.
    cout<<"These are marks"<<endl;
    cout<<"The value at marks[0] is : "<<*p<<endl; // This dereference opertor will give the value at zeroth index
    cout<<"The value at marks[1] is : "<<(*p+1)<<endl; // This dereference opertor will give the value at first index
    cout<<"The value at marks[2] is : "<<(*p+2)<<endl; // This dereference opertor will give the value at second index
    cout<<"The value at marks[3] is : "<<(*p+3)<<endl; // This dereference opertor will give the value at th index
    cout<<(*p++);
    cout<<(*p);
}