#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count; // default value is 0.

    public:
        void set_id(void);
        void get_id(void);
        
        // static function...
        static void get_count(void)
        {
            cout<<"The value of count is : "<<count<<endl;
        }
};

void employee :: set_id(void)
{
    cout<<"Enter the ID : "<<endl;
    cin>>id;
    count++;
}

void employee :: get_id(void)
{
    cout<<"The ID of employee "<<count<<" is : "<<id<<endl;
}

// Count is the static data member of class employee.
int employee :: count; 

int main()
{
    employee a,b,c;
    a.set_id();
    a.get_id();
    employee :: get_count();
    
    b.set_id();
    b.get_id();
    employee :: get_count();
    
    c.set_id();
    c.get_id();
    employee :: get_count();
    return 0;
}