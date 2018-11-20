#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    while(b==0)
    {
        cout<<"enter a number:";
        cin>>a;
        if(a==2)
        {
            cout<<"有效";
            b=1;
        }
        else if(b==1)
        {
            cout<<"有效";
            b=1;
        }
        else
        {
            cout<<"无效";
            b=0;
        }

    }
}
