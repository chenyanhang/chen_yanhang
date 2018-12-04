#include <iostream>

using namespace std;

int main()
{
     for(int i=1;i<=5;i++)
     {
         for(int a=1;a<=5-i;a++)
         {
             cout<<" ";
         }
         for(int x=1;x<=2*i-1;x++)
         {
             cout<<"*";
         }
         cout<<endl;
     }
     for(int i=1;i<=4;i++)
     {
         for(int a=1;a<=i;a++)
         {
             cout<<" ";
         }
         for(int x=1;x<=9-2*i;x++)
         {
             cout<<"*";
         }
         cout<<endl;
     }

}
