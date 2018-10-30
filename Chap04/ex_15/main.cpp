#include <iostream>

using namespace std;

int main()
{
    int a=200;
    double b=0;
    double c=0;
    while(b!=-1)
    {
        cout<<"Enter sales in dollars(-1 to end):"<<endl;
        cin>>b;
        c=a+b*0.09;
        cout<<"Salary is:"<<c<<endl;

    }
}
