#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>

class Package
{
    public:
        Package(const std::string&,const std::string&,const std::string&,const std::string&,int,double,double);

        void setName(const std::string &);
        std::string getName() const;

        void setAddress(const std::string &);
        std::string getAddress() const;

        void setCity(const std::string &);
        std::string getCity() const;

        void setState(const std::string &);
        std::string getState() const;

        void setPC(int);
        int getPC() const;

        void setWeight(double);
        double getWeight() const;

        void setExpense(double);
        double getExpense() const;

        double calculateCost();
    protected:
        double weight;
        double expense;

    private:
        std::string name;
        std::string address;
        std::string city;
        std::string state;
        int PC;
};

#endif // PACKAGE_H
