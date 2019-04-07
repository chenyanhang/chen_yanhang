#include "Package.h"
#include<iostream>
using namespace std;

Package::Package(const std::string &n,const std::string &a,const std::string &c,const std::string &s,int P,double w, double e)
{
    name=n;
    address=a;
    city=c;
    state=s;
    PC=P;
    weight=w;
    expense=e;
}
void Package::setName(const std::string &n)
{
   name=n;
}
string Package::getName() const
{
    return name;
}
void Package::setAddress(const std::string &a)
{
   address=a;
}
string Package::getAddress() const
{
    return address;
}
void Package::setCity(const std::string &c)
{
   city=c;
}
string Package::getCity() const
{
    return city;
}
void Package::setState(const std::string &s)
{
    state=s;
}
string Package::getState() const
{
    return state;
}
void Package::setPC(int P)
{
    PC=P;
}
int Package::getPC() const
{
    return PC;
}
void Package::setWeight(double w)
{
   weight=w;
}
double Package::getWeight() const
{
    return weight;
}
void Package::setExpense(double e)
{
   expense=e;
}
double Package::getExpense() const
{
    return expense;
}
double Package::calculateCost()
{
   return weight*expense;
}



