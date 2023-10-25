#include<iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 0;

    public:
        void set_price(void);
        void display_price(void);
};

void shop :: set_price(void)
{
    cout<<"Enter the ID of the item "<<counter+1<<" : "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the Price of the item : "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: display_price(void)
{
    for (int i=0;i<counter;i++)
    {
        cout<<"The ID of your item "<<i+1<<" is "<<itemId[i]<<" and the price is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.display_price();
    return 0;
}