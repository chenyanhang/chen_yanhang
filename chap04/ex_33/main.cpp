#include<iostream>
using namespace std;

int main()
{
    double a,b,c;
    cout<<"enter three numbers"<<endl;
    cin>>a>>b>>c;
    if(a<=b,b<=c)
    {
        if(a*a+b*b==c*c)
            cout<<"�������ֱ��������"<<endl;
        elseif(a*a+c*c==b*b)
            cout<<"�������ֱ��������"<<endl;
        else if(b*b+c*c==a*a)
            cout<<"�������ֱ��������"<<endl;
        else
            cout<<"����"<<endl;
    }
    else
    {

        if(a*a+b*b==c*c)
        cout<<"�������ֱ��������"<<endl;
        else if(a*a+c*c==b*b)
        cout<<"�������ֱ��������"<<endl;
        else if(b*b+c*c==a*a)
        cout<<"�������ֱ��������"<<endl;
        else
        cout<<"�������ֱ��������"<<endl;

    }





}
