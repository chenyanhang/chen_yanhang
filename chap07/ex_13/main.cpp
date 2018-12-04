#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,20> n={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(size_t i=0;i<n.size();++i)
    {
        int a=0;
        cin>>a;
        int b=0;
        for(int i=0;i<20;i++)
        {
           if(a!=n[i])
               b=1;
           else
           {
               b=0;
               break;
           }
        }
        if(b==1)
            n[i]=a;
        else
            n[i]=0;
    }
    for(int i=0;i<20;i++)
    {
         if(n[i]!=0)
            cout<<n[i]<<" ";
         else
            cout<<"";
    }
}
