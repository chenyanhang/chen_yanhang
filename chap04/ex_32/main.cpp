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
       cout<<"�����������Թ���������";
       else
       cout<<"�������������Թ���������";
     }
     else
        cout<<"�������������Թ���������";
   }
   else
   cout<<"�������������Թ���������";
}
