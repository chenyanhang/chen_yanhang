#include <iostream>

using namespace std;

int integerPower(int base,int exponent)
{
    int c=1;
    int i=0;
    while(i<exponent)
    {
        c=c*base;
        i++;
    }
    return c;
}
int main()
{
    int base;
    int exponent;
    cin>>base>>exponent;
    cout<<integerPower(base,exponent)<<endl;
}
