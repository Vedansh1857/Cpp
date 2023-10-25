#include<iostream>
using namespace std;

class bank_deposit
{
    int principle;
    int years;
    float interest_rate;
    float return_value;
    public:
    bank_deposit(){};
    bank_deposit(int p, int y, float r);
    bank_deposit(int p, int y, int r);
    void show(void);
};

bank_deposit :: bank_deposit(int p, int y, float r)
{
    principle = p;
    years = y;
    return_value = r;
    interest_rate = principle;
    for(int i=0;i<y;i++){
        return_value *= (1+r);
    }
}

bank_deposit :: bank_deposit(int p, int y, int r)
{
    principle = p;
    years = y;
    return_value = float(r)/100;
    interest_rate = principle;
    for(int i=0;i<y;i++){
        return_value *= (1+r);
    }
}

void bank_deposit :: show(void)
{
    cout<<endl<<"Principal amount was "<<principle
        << ". Return value after "<<years
        << " years is "<<return_value<<endl;
}

int main()
{
    bank_deposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p,y & r : "<<endl;
    cin>>p>>y>>r;
    bd1 = bank_deposit(p,y,r);
    bd1.show();
    return 0;
}