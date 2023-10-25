#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s; // By default the parameters inside a class are private. Hence s is private.
    void chk_binary(void);
public:
    void read_binary(void);
    void ones_complement(void);
    void display(void);
};

void binary :: read_binary(void)
{
    cout<<"Enter the binary number : "<<endl;
    cin>>s;
}

void binary :: chk_binary(void)
{
    for(int i=0;i<s.length();i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorect binary form"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_complement(void)
{
    chk_binary();
    for(int i=0;i<s.length();i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{
    cout<<"The binary number is : "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read_binary();
    // b.chk_binary();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}