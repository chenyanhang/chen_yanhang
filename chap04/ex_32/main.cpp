#include <iostream>

using namespace std;

int main()
{
   int a=0;
   int b=0;
   int c=0;
   cout<<"enter three numbers:";
   cin>>a>>b>>c;
   if(a+b>c)
   {
       if(b+c>a)
     {
       if(a+c>b)
       cout<<"这三个数可以构成三角形";
       else
       cout<<"这三个数不可以构成三角形";
     }
     else
        cout<<"这三个数不可以构成三角形";
   }
   else
   cout<<"这三个数不可以构成三角形";
}
