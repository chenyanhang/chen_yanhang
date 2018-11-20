#include <iostream>

using namespace std;

int main()
{
   int number=0;
   int first=0;
   int second=0;
   int i=0;
   while(i<10)
   {
       cout<<"Enter a number:";
       cin>>number1>>number2
       if(number-first>0)
        first=number;
       if(number-second>0)
       {
           if(first>number)
            second=number;
       }
       i++;
   }
   cout<<first<<"\n"<<second;
}
