#include <iostream>

using namespace std;

int main()
{
    int r=0;
    int d=0;
    double L=0;
    double S=0;
    double P=3.14159;
    cout<<"Enter a number:";
    cin>>r;
    d=2*r;
    L=d*P;
    S=P*r*r;
    cout<<"直径\t"<<d<<endl;
    cout<<"周长\t"<<L<<endl;
    cout<<"面积\t"<<S<<endl;
}
