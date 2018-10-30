#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int i=0;
    cout<<"enter a number"<<endl;
    cin>>d;
    while(d!=0)
    {
        a=d%10;
        i=i+1;
        b=a*pow(2,i-1);
        d=d/10;
        c=c+b;
    }
    cout<<c;
}
