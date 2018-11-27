#include <iostream>

using namespace std;

int A(int x)
{
    int a=1;
    for(int i=1;i<=x;i++)
    {
        a=a*i;
    }
    return a;
}
int main()
{
     for(int i=1;i<=5;i++)
     {
         cout<<i<<"\t"<<A(20)<<endl;
     }

}
