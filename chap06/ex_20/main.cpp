#include <iostream>

using namespace std;

int multipie(int a,int b)
{
    int c=0;
    if(b%a==0)
        c=1;
    else
        c=0;
    return c;
}
int main()
{
    int a=0;
    int b=0;
    cout<<"enter two number:";
    cin>>a>>b;
    while(a!=0)
    {
    cout<<multipie(a,b)<<endl;
    cout<<"enter two number";
    cin>>a>>b;
    }
}
