#include "OvernightPackage.h"
#include<iostream>
#include<stdexcept>
 using namespace std;
OvernightPackage::OvernightPackage(const std::string &n,const std::string &a,const std::string &c,const std::string &s,int P,double w, double e,double m)
:Package(n,a,c,s,P,w,e)
{
   moreexpense=m;
}
void OvernightPackage::setOvernightExpense(double m)
{
   moreexpense=m;
}
double OvernightPackage::getOvernightExpense() const
{
    return moreexpense;
}
double OvernightPackage::calculateCost()
{
    return weight*(expense+moreexpense);
}


