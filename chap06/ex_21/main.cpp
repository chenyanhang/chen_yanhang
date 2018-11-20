#include <iostream>

using namespace std;

int iseven(int a)
{
    int c=0;
    if(a%2==0)
        c=1;
    else
        c=0;
    return c;
}
int main()
{
    int a=0;
    cout<<"enter a number:";
    cin>>a;
    while(a!=-1)
       {   cout<<iseven(a)<<endl;
           cout<<"enter a number:";
           cin>>a;
       }
}
