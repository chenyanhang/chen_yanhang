#include<iostream>

using namespace std;

void number(int x)
{
    for(int a=x;a%10!=0;a=a/10)
    {
        cout<<a%10;
    }

}
int main()
{
    int a=0;
    cin>>a;
    number(a);
}
