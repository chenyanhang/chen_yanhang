#include <iostream>

using namespace std;

int main()
{
    int accountNumber =0;
    double beginnintBalance=0;
    double charges=0;
    double credit=0;
    double limit=0;
    double newbalance;

    while(accountNumber!=-1)
    {
        cout<<"Enter account number (or -1 to quit):"<<endl;
        cin>>accountNumber;
        cout<<"Enter beginning balance:"<<endl;
        cin>>beginnintBalance;
        cout<<"Enter total charges:"<<endl;
        cin>>charges;
        cout<<"Enter total credits:"<<endl;
        cin>>credit;
        cout<<"Enter credit limit:"<<endl;
        cin>>limit;
        newbalance=beginnintBalance+charges-credit;
        cout<<"New balance is "<<newbalance<<endl;
     if(newbalance>limit)
        {
           cout<<"Account:      "<<accountNumber<<endl;
           cout<<"Credit limit: "<<limit<<endl;
           cout<<"Balance:      "<<newbalance<<endl;
           cout<<"Credit limit Exceeded."<<endl;
        }

     }

}
