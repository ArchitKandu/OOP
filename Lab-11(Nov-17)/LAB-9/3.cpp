#include <iostream>
#include <string>
using namespace std;
class account_924
{
    protected:
    string name;
    string accno;
    float bal;
    public:
    void getData()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Account Number: ";
        cin>>accno;
        cout<<"Enter Balance: ";
        cin>>bal;
    }
    virtual void minbal()=0;
    virtual void deposit()=0;
    virtual void withdraw()=0;
    virtual void check()=0;
};
class savings_924:public account_924
{
    public:
    float mb;
    float a;
    void minbal()
    {
        cout<<"Enter Minimum Balance: ";
        cin>>mb;
        bal=bal-mb;
    }
    void deposit()
    {
        cout<<"Enter Depositing Amount: ";
        cin>>a;
        cout<<"Rs. "<<a<<" Deposited"<<endl;
        bal=bal+a;
        cout<<"Final Amount: Rs. "<<bal<<endl;
    }
    void withdraw()
    {
        cout<<"Enter Withdrawing Amount: ";
        cin>>a;
        if(a<=bal)
        {
            cout<<"Rs. "<<a<<" Withdrawn" << endl;
            bal=bal-a;
            cout<<"Final Amount: Rs. "<<bal<<endl;
        }
        else
            cout<<"Insufficient Amount to Withdraw"<<endl;
    }
    void check()
    {
        cout<<"Your Balance is Rs. "<<bal<<endl;
    }
};
class current_924:public account_924
{
    public:
    float a;
    float od;
    void minbal()
    {
        cout<<"Enter Overdue Amount: ";
        cin>>od;
        bal=bal-od;
    }
    void deposit()
    {
        cout<<"Enter Depositing Amount: ";
        cin>>a;
        cout<<"Rs. "<<a<<" Deposited"<<endl;
        bal=bal+a;
        cout<<"Final Amount: Rs. "<<bal<<endl;
    }
    void withdraw()
    {
        cout<<"Enter Withdrawing Amount: ";
        cin>>a;
        if(a<=bal)
        {
            cout<<"Rs. "<<a<<" Withdrawn" << endl;
            bal=bal-a;
            cout<<"Final Amount: Rs. "<<bal<<endl;
        }
        else
            cout<<"Insufficient Amount to Withdraw"<<endl;
    }
    void check()
    {
        cout<<"Your Balance is Rs. "<<bal<<endl;
    }
};
int main()
{
    int ch,sch;
    while(1)
    {
        cout<<"\n0. Exit"<<endl;
        cout<<"1. Savings Account"<<endl;
        cout<<"2. Current Account"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        if(ch==1)
        {
            savings_924 obs;
            cout<<"\n=======SAVINGS======="<<endl;
            obs.getData();
            obs.minbal();
            sch=4;
            while(sch==1||sch==2||sch==3||sch==4)
            {
                cout<<"\n0. Exit"<<endl;
                cout<<"1. Deposit"<<endl;
                cout<<"2. Withdraw"<<endl;
                cout<<"3. Check Balance"<<endl;
                cout<<"Enter a choice: ";
                cin>>sch;
                switch(sch)
                {
                    case 1:
                        cout<<endl;
                        obs.deposit();
                        break;
                    case 2:
                        cout<<endl;
                        obs.withdraw();
                        break;
                    case 3:
                        cout<<endl;
                        obs.check();
                        break;
                }
            }
        }
        else if(ch==2)
        {
            current_924 obc;
            cout<<"\n=======CURRENT======="<<endl;
            obc.getData();
            obc.minbal();
            sch=4;
            while(sch==1||sch==2||sch==3||sch==4)
            {
                cout<<"\n0. Exit"<<endl;
                cout<<"1. Deposit"<<endl;
                cout<<"2. Withdraw"<<endl;
                cout<<"3. Check Balance"<<endl;
                cout<<"Enter a choice: ";
                cin>>sch;
                switch(sch)
                {
                    case 1:
                        cout<<endl;
                        obc.deposit();
                        break;
                    case 2:
                        cout<<endl;
                        obc.withdraw();
                        break;
                    case 3:
                        cout<<endl;
                        obc.check();
                        break;
                }
            }
        }
        else break;
    }
    cout<<endl;
    return 0;
}
