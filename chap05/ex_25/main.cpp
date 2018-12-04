#include <iostream>

using namespace std;

int main()
{
     unsigned int count;
     for(count=1;count<=4;++count)
     {
         if(count==5)
            cout<<"";
         else
            cout<<count<<" ";
     }
     cout<<"\nBroke out of loop at count ="<<count<<endl;
}
