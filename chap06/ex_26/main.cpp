#include <iostream>

using namespace std;

double celsius(int a)
{
    double b=0;
    b=(a-32)/1.8;
    return b;
}
double fahrenheit(int b)
{
    double a=0;
    a=32+1.8*b;
    return a;
}
int main()
{
     int a=0;
     cout<<"摄氏度\t"<<"华氏度"<<endl;
     while(a<=100)
     {

         cout<<a<<"\t"<<fahrenheit(a)<<endl;
         a++;
     }
     cout<<"\n\n\n";
     int b=32;
     cout<<"华氏度\t"<<"摄氏度"<<endl;
     while(b<=212)
     {

         cout<<b<<"\t"<<celsius(b)<<endl;
         b++;
     }
}
