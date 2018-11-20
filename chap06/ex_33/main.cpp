#include <iostream>
#include<iomanip>
#include<random>
#include<ctime>
using namespace std;

int main()
{
     default_random_engine engine(static_cast<unsigned int>(time(0)));
     uniform_int_distribution<unsigned int> randomInt(0,1);
     for(unsigned int a=1;a<=100;a++)
     {
         cout<<setw(5)<<radomInt(engine);
         if(a%10==0)
            cout<<endl;
     }
}
