#include <iostream>

using namespace std;

int A(int side)
{
    int i=0;
    while(i<side)
    {
        cout<<"*";
        i++;
    }
}
int B(int side)
{
    int i=0;
    while(i<side)
    {
        cout<<A(side)<<endl;
        i++;
    }
}
int main()
{
    int a=0;
    cin>>a;
    B(a);
}
