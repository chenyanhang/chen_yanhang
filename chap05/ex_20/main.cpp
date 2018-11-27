#include <iostream>

using namespace std;

int main()
{
    for(int side1=1;side1<=500;side1++)
    {
        for(int side2=1;side2<=500;side2++)
        {
            for(int hypotenuse=1;hypotenuse<=500;hypotenuse++)
            {
                if(hypotenuse*hypotenuse==side1*side1+side2*side2)
                    cout<<side1<<"\t"<<side2<<"\t"<<hypotenuse<<endl;
                else
                    cout<<"";
            }

        }
    }
}
