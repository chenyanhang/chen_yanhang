#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int a=0;
    cout<<"N"<<"\t10*N"<<"\t100*N"<<"\t1000*N\n"<<endl;
   while(i<5)
   {
       a++;
       cout<<a<<"\t"<<10*a<<"\t"<<100*a<<"\t"<<1000*a<<endl;
       i++;
   }
}
