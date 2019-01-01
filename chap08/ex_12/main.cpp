#include <iostream>
#include<array>
#include<random>
#include<ctime>
#include<iomanip>
#include <windows.h>
using namespace std;


 void moveTortoise(int *TPtr,int b)
 {
     if(b<=5)
       *TPtr=*TPtr+3;
     if(b>=6&&b<=7)
       *TPtr=*TPtr-6;
     if(b>=8)
       *TPtr=*TPtr+1;
     if(*TPtr<=1)
       *TPtr=1;
}
void moveHare(int *HPtr,int a)
{
    if(a<=2)
      *HPtr=*HPtr;
    if(a>=3&&a<=4)
      *HPtr=*HPtr+9;
    if(a==5)
        *HPtr=*HPtr-12;
    if(a>=6&&a<=8)
        *HPtr=*HPtr+1;
    if(a>=9)
        *HPtr=*HPtr-2;
    if(*HPtr<=1)
      *HPtr=1;
}
int main()
{

    int T=1;
    int H=1;
    int*TPtr=&T;
    int*HPtr=&H;
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> B(1,10);
    uniform_int_distribution<unsigned int> A(1,10);

    while(*TPtr<70&&*HPtr<70)
    {

        moveTortoise(&T,B(engine));
        cout<<"BANC !!!!!      :"<<setw(T)<<"T";
        cout<<"\n";
        moveHare(&H,A(engine));
        cout<<"AND THEY ARE OFF:"<<setw(H)<<"H";
        cout<<endl;
        if(H==T)
            cout<<setw(H+23)<<"OUCH!!!";
        cout<<endl;
        Sleep(1000);
    }
    if(H>T)
        cout<<"Hare wins. Yuch.";
    else
        cout<<"TORTOISE WINS!!!YAY!!!";
}


