#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number=0;
    int largest=0;
    while(counter<10)
    {
        cout<<"enter a number:";
        cin>>number;
        if(number-largest>0)
            largest=number;
        counter++;
    }
    cout<<largest;
}
