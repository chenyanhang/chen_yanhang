#include <iostream>

using namespace std;

void A()
{
    for(int i=1;i<=10;i++)
    {
        for(int a=1;a<=i;a++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}
void B()
{
    for(int i=10;i>=1;i--)
    {
        for(int a=1;a<=i;a++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void C()
{
    for(int i=10;i>=1;i--)
    {
         for(int b=0;b<10-i;b++)
            {
                cout<<" ";
            }
        for(int a=1;a<=i;a++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void D()
{
    for(int i=1;i<=10;i++)
    {
         for(int b=0;b<10-i;b++)
            {
                cout<<" ";
            }
        for(int a=1;a<=i;a++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
int main()
{
    A();
    cout<<endl;
    B();
    cout<<endl;
    C();
    cout<<endl;
    D();
}
