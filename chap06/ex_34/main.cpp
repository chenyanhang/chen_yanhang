#include <iostream>

using namespace std;

int main()
{
   int a=0;
   int b=1;
   int i=0;
   cout<<"enter a number:";
   cin>>a;
 if(a!=0)
  {
   i=a;
   while(i>0)
       {
           b=b*i;
           i=i-1;
       }
  }
  else
    b=1;

   cout<<b;
}
