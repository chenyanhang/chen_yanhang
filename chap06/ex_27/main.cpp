#include <iostream>

using namespace std;

double least(double a,double b,double c)
{
    double d=0;
    if(a>b)
        d=b;
    else
        d=a;
    if(d>c)
        d=c;
    else
        d=d;
    return d;
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout<<least(a,b,c);
}
