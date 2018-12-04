#include <iostream>
#include<iomanip>
#include<array>
#include<random>
#include<ctime>
using namespace std;

int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> A(1,6);
    uniform_int_distribution<unsigned int> B(1,6);
    const size_t arraysize=13;
    array<unsigned int,arraysize>n={};
    for(unsigned int i=1;i<=36000;i++)
        ++n[ A(engine)+B(engine)];
    cout<<"face"<<setw(13)<<"n"<<endl;
    for(size_t face=2;face<n.size();++face)
        cout<<setw(4)<<face<<setw(13)<<n[face]<<endl;

}
