#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main()
{
     Package A("chen","sdkjdx","qd","sd",10220,12,10);
     cout<<A.calculateCost();
     cout<<endl;
     OvernightPackage B("chen","sdkjdx","qd","sd",10220,12,10,5);
     cout<<B.calculateCost();
     cout<<endl;
     TwoDayPackage C("chen","sdkjdx","qd","sd",10220,12,10,20);
     cout<<C.calculateCost();
}
