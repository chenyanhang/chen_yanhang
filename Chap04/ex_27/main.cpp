#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int a=0;
   int b=0;
   int c=0;
   int i=0;
   cout<<"enter a number"<<endl;
   cin>>b;
   while(b!=0)
   {
       a=b%2;
       b=b/2;
       i=i+1;
       c=c+pow(10,i-1);
   }
   cout<<c;
}
