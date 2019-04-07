#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include<string>
#include"Package.h"

class OvernightPackage:public Package
{
    public:
        OvernightPackage(const std::string&,const std::string&,const std::string&,const std::string&,int,double,double,double);

        void setOvernightExpense(double);
        double getOvernightExpense() const;

        double calculateCost();
    private:
        double moreexpense;
};

#endif // OVERNIGHTPACKAGE_H
