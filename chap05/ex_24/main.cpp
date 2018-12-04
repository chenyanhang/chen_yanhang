#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double b=0;
    int c=0;
    cin>>b;
    c=ceil(b/2);
    for(int i=1;i<=c;i++)
     {
         for(int a=1;a<=c-i;a++)
         {
             cout<<" ";
         }
         for(int x=1;x<=2*i-1;x++)
         {
             cout<<"*";
         }
         cout<<endl;
     }
     for(int i=1;i<=b-c;i++)
     {
         for(int a=1;a<=i;a++)
         {
             cout<<" ";
         }
         for(int x=1;x<=2*(c-i)-1;x++)
         {
             cout<<"*";
         }
         cout<<endl;
     }

}
