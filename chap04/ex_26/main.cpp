#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    cout<<"enter a number:";
    cin>>a;
    b=a/10;
    c=a/1000;
    d=a/10000;
    if(a%10==d)
    {
        if(b%10==c%10)
   cout<<"a是回数";
    }
    else
   cout<<"a不是回数";
}
