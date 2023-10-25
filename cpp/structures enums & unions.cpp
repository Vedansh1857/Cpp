#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; // 4 bytes
    char favChar; // 1 bytes
    float salary; // 4 bytes
}ep; // total (4+1+4) bytes are allocated in the memory

union barterSystem // used for efficient memory management
{
    /* data */
    int rice; // 4 bytes
    char car; // 1 bytes
    float pounds; // 4 bytes
}; // total of only 4 bytes are allocated i.e. the maximum of three is only used.
 
int main()
{
    enum Meal{Breakfast , lunch , dinner};
    int m1=Breakfast;
    int m2=lunch;
    int m3=dinner;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;
    // union barterSystem bs;
    // bs.rice = 34;
    // bs.car='C';
    // cout<<bs.car;
    // ep vedu;
    // vedu.eId = 1;
    // vedu.favChar = 'V';
    // vedu.salary = 50000000;
    // cout<<vedu.eId<<endl;
    // cout<<vedu.favChar<<endl;
    // cout<<vedu.salary<<endl;
    return 0;
}