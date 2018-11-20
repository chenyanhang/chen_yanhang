#include <iostream>
#include<cmath>
using namespace std;

double roundToInteger(double x)
{
    double a=0;
    a=floor(x+0.5);
    return a;
}
double roundToTenths(double x)
{
    double a=0;
    a=floor(x*10+0.5)/10;
    return a;
}
double roundToHundredths(double x)
{
    double a=0;
    a=floor(x*100+0.5)/100;
    return a;
}
double roundToThousandths(double x)
{
    double a=0;
    a=floor(x*1000+0.5)/1000;
    return a;
}
int main()
{
    double a=0;
    cin>>a;
    cout<<a<<"\t"<<roundToInteger(a)<<"\t"<<roundToTenths(a)<<"\t"<<roundToHundredths(a)<<"\t"<<roundToThousandths(a);
}
