#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int,1000>n;
    for(size_t i=0;i<n.size();i++)
    {
        n[i]=1;
    }
    for(int i=2;i<=999;i++)
    {
        int c=0;
        for(int a=2;c<=999;a++)
        {
            n[c]=0;
            c=a*i;
        }
    }
    for(int i=2;i<=999;i++)
    {
        if(n[i]!=1)
            cout<<"";
        else
            cout<<i<<" ";
    }
}
