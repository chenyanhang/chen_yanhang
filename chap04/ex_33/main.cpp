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
            cout<<"可以组成直角三角形"<<endl;
        elseif(a*a+c*c==b*b)
            cout<<"可以组成直角三角形"<<endl;
        else if(b*b+c*c==a*a)
            cout<<"可以组成直角三角形"<<endl;
        else
            cout<<"不行"<<endl;
    }
    else
    {

        if(a*a+b*b==c*c)
        cout<<"可以组成直角三角形"<<endl;
        else if(a*a+c*c==b*b)
        cout<<"可以组成直角三角形"<<endl;
        else if(b*b+c*c==a*a)
        cout<<"可以组成直角三角形"<<endl;
        else
        cout<<"不能组成直角三角形"<<endl;

    }





}
