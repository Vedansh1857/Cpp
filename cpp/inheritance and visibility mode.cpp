#include<iostream>
using namespace std;

// Base class...
class employee
{
    public:
        int id;
        float salary;
        employee(int inpId){
            id = inpId;
            salary = 50.0;
        }
        employee(){}
};

/* Note:
1. The default visibility mode is private.
2. Private visibility mode : public members of the base class becomes private members of the derived class.
3. Public visibility mode : public members of the base class becomes public members of the derived class.
4. The private members of a base class will not be inherited.
*/

// Derived class...
class programmer : public employee{
    public:
        programmer(int inpId){
            id = inpId;
        }
        void getdata(){
            cout<<id<<endl;
        }
        int langCode = 9;
};

int main()
{
    employee vedansh(10),krishna(20);
    cout<<vedansh.salary<<endl;
    cout<<krishna.salary<<endl;
    programmer skillf(100);
    cout<<skillf.id<<endl;
    cout<<skillf.langCode<<endl;
    // skillf.getdata();
    return 0;
}