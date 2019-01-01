#include <iostream>

using namespace std;

int main()
{
    long int valuel=200000;
    long int valuel2;
    long int*longPtr;
    longPtr=&valuel;
    cout<<*longPtr;
    valuel2=*longPtr;
    cout<<endl;
    cout<<valuel2;
    cout<<endl;
    cout<<&valuel<<" "<<longPtr;
}
