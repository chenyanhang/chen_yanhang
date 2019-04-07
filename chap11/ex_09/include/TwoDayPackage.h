#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include<string>
#include"Package.h"

class TwoDayPackage:public Package
{
    public:
        TwoDayPackage(const std::string&,const std::string&,const std::string&,const std::string&,int,double,double,double);

        void setTwoDayExpense(double);
        double getTwoDayExpense() const;

        double calculateCost();

    private:
        double twodayexpense;
};

#endif // TWODAYPACKAGE_H
