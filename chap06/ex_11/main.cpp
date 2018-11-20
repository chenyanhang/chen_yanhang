#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double calculateCharges(double a)
{
    double b=0;
    if(a<=3)
        b=2;
    else
        b=2+0.5*(ceil(a)-3);
    if(b>10)
        b=10;
    return(b);
}
int main()
{
    double a=0;
    double b=0;
    double c=0;
    double d=0;
    double e=0;
    cin>>a>>b>>c;
    d=a+b+c;
    e=calculateCharges(a)+calculateCharges(b)+calculateCharges(c);
    cout<<setiosflags(ios::right);
    cout<<"Car\t"<<"Hour\t"<<"Charge"<<endl;
    cout<<"1"<<setw(11)<<a<<setw(10)<<calculateCharges(a)<<endl;
    cout<<"2"<<setw(11)<<b<<setw(10)<<calculateCharges(b)<<endl;
    cout<<"3"<<setw(11)<<c<<setw(10)<<calculateCharges(c)<<endl;
    cout<<"TOTAL"<<setw(7)<<d<<setw(10)<<e;



}
