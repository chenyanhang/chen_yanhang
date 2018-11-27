#include <iostream>
#include<cmath>
using namespace std;

double pi(int a)
{
    double pi=0;
    for(int i=1;i<=a;i++)
    {
        pi=pi+pow(-1,i+1)*4/(2*i-1);
    }
    return pi;
}
int main()
{
     for(int i=1;i<=1000;i++)
     {
        cout<<pi(i)<<"     ";
     }
}
