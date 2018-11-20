#include <iostream>
#include<math.h>
using namespace std;

double hyponent(double a,double b)
{
    double c=0;
    c=a*a+b*b;
    c=sqrt(c);
    return c;
}
int main()
{
    cout<<"1\t"<<"3.0\t"<<"4.0\t"<<hyponent(3.0,4.0)<<endl;
    cout<<"2\t"<<"5.0\t"<<"12.0\t"<<hyponent(5.0,12.0)<<endl;
    cout<<"3\t"<<"8.0\t"<<"15.0\t"<<hyponent(8.0,15.0)<<endl;
}
