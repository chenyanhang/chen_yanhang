#include <iostream>

using namespace std;

int main()
{
   int a=0;
   int b=0;
   int c=0;
   cout<<"Enter hours worked(-1 or end):"<<endl;
   cin>>a;
   while(a!=-1)
   {
      cout<<"Enter hourly rate of the employee ($00.00):"<<endl;
      cin>>b;
      if(a>=40)
        c=400+(a-40)*15;
      else
        c=10*a;
      cout<<"Salary is $"<<c<<endl<<endl;
      cout<<"Enter hours worked(-1 or end):"<<endl;
      cin>>a;
   }
}
