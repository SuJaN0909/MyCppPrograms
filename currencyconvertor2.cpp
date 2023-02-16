//USD to INR convertor
//1 USD = 82.51 INR as on 10/02/2023
#include<iostream>
using namespace std;

int main()
{
    const double inr_per_usd{82.51};

    cout<<"Welcome to USD to INR convertor"<<endl;
    cout<<"Enter the value in USD: ";

    double usd{0.0};
    cin>>usd;

    double inr{0.0};
    inr=usd*inr_per_usd;

    cout<<"Value of "<<usd<<" dollars is "<<inr<<" ruppee as on 10/02/2023";

    return 0;
}