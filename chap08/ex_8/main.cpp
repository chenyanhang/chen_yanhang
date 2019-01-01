#include <iostream>

using namespace std;

int main()
{
     unsigned int values[5]={2,4,6,8,10};
     unsigned int *vPtr;
     for(int i=0;i<5;i++)
     {
         cout<<values[i]<<" ";
     }
     vPtr=values;
     cout<<endl;
     cout<<vPtr;
     cout<<endl;
     for(int i=0;i<5;i++)
     {
         cout<<*(vPtr+i)<<" ";
     }
     cout<<endl;
     for(int i=0;i<5;i++)
     {
         cout<<*(values+i)<<" ";
     }
     cout<<endl;
     for(int i=0;i<5;i++)
     {
         cout<<vPtr[i]<<" ";
     }
     cout<<endl;
     cout<<values[4]<<" "<<*(values+4)<<" "<<vPtr[4]<<" "<<*(vPtr+4);
     cout<<endl;
     cout<<vPtr+3<<" "<<&values[3]<<" "<<*(vPtr+3)<<" "<<values[3];
     cout<<endl;
     vPtr=&values[4];
     vPtr-=4;
     cout<<vPtr<<" "<<&values[0]<<" "<<vPtr[0]<<" "<<values[0];
}
