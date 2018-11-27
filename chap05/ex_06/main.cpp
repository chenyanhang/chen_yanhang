#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    double c=0;
    int i;
    cin>>a;
    for(i=1;a!=9999;i++)
    {
       b=b+a;
       cin>>a;
    }
    c=b/(i-1);
    cout<<c;
}
