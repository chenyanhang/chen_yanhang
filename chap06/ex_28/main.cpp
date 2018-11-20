#include <iostream>

using namespace std;

int isperfect(int x)
{
    int a=1;
    int b=0;
    int c=0;
    while(a<x)
    {
        if(x%a!=0)
            b=0;
        else
            b=a;
        c=c+b;
        a++;
    }
    if(c==x)
    return c;
    else
    return 0;
}
int main()
{
    int a=2;
    while(a<1000)
    {
        cout<<isperfect(a)<<"  ";
        a++;
    }
}
