#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    array<int,10> alphabet{1,2,3,4,5,6,7,8,9,0};
    cout<<alphabet[6];
    cout<<endl;
    array<double,10> grades{1,2,3,4,5,6,7,8,9,0};
    grades[4]=15;
    cout<<grades[4];
}
