#include <iostream>
#include<array>>
#include<iomanip>
using namespace std;



int main()
{
    const size_t rows=5;
    const size_t columns=4;
    array<array<int,columns>,rows>n={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout<<" ";
    for(int i=1;i<=4;i++)
    {
        cout<<setw(6)<<i;
    }
    cout<<endl;
    int c=0;
    for(int i=0;i<5;i++)
    {
        int b=0;
        cout<<i+1;
        for(int a=0;a<4;a++)
        {
            cout<<setw(6)<<n[i][a];
            b=b+n[i][a];
        }
        cout<<setw(6)<<b<<endl;
    }
    cout<<" ";
    for(int i=0;i<4;i++)
    {
        int b=0;
        for(int a=0;a<5;a++)
        {
            b=b+n[a][i];
        }
        cout<<setw(6)<<b;
    }




}
