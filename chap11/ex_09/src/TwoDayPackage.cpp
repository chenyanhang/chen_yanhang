#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const std::string &n,const std::string &a,const std::string &c,const std::string &s,int P,double w, double e,double t)
:Package(n,a,c,s,P,w,e)
{
    twodayexpense=t;
}
void TwoDayPackage::setTwoDayExpense(double t)
{
   twodayexpense=t;
}
double TwoDayPackage::getTwoDayExpense() const
{
    return twodayexpense;
}
double TwoDayPackage::calculateCost( )
{
    return weight*expense+twodayexpense;
}

