#include<iostream>
using namespace std;
class account_924
{
    protected:
    int accn;
    string name;
    float bal;
    public:
    account_924(int accno,string n,int balc)
    {
        accn=accno;
        name=n;
        bal=balc;
    }
    void display()
    {
        cout<<"\n\tAccount Holder's Details"<<endl;
        cout<<"Account Number: "<<accn<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<bal<<endl;
    }
};
class savings_924: public account_924
{
    protected:
    int minbal;
    int ds;
    int ws;
    public:
    savings_924(int min,int accno,string n,int balc):account_924(accno,n,balc)
    {
        minbal=min;
    }
    void sdeposit()
    {
        cout<<"Enter Depositing Amount: ";
        cin>>ds;
        bal=bal+ds-minbal;
    }
    void swithdraw()
    {
        int temp;
        cout<<"Enter Withdrawing Amount: ";
        cin>>ws;
        temp=bal;
        if(temp>ws) bal=bal-ws;
        else cout<<"Not Sufficient Balance!!!"<<endl;
    }
    void sdetail()
    {
        display();
    }
};
class current_924: public account_924
{
    protected:
    int ovd;
    int dc;
    int wc;
    public:
    current_924(int ovdue,int accno,string n,int balc):account_924(accno,n,balc)
    {
        ovd=ovdue;
    }
    void cdeposit()
    {
        cout<<"Enter Depositing Amount: ";
        cin>>dc;
        bal=bal+dc-ovd;
    }
    void cwithdraw()
    {
        int temp;
        cout<<"Enter Withdrawing Amount: ";
        cin>>wc;
        if(bal<0) cout<<"Not Sufficient Balance!!!"<<endl;
        else if(wc>bal) cout<<"Not Sufficient Balance!!!"<<endl;
        else bal=bal-wc;
    }
    void cdetail()
    {
        display();
    }
};
int main()
{
    int accno,balc,min,ovdue;
    string n;
    cout<<"\n-----SAVINGS ACCOUNT------"<<endl;
    cout<<"Enter Name: ";
    cin>>n;
    cout<<"Enter Account Number: ";
    cin>>accno;
    cout<<"Enter Balance: ";
    cin>>balc;
    cout<<"Enter Minimum Balance: ";
    cin>>min;
    savings_924 s(min,accno,n,balc);
    s.sdeposit();
    s.swithdraw();
    s.sdetail();
    cout<<"\n\n-----CURRENT ACCOUNT------"<<endl;
    cout<<"Enter Name: ";
    cin>>n;
    cout<<"Enter Account Number: ";
    cin>>accno;
    cout<<"Enter Balance: ";
    cin>>balc;
    cout<<"Enter Overdue Amount: ";
    cin>>ovdue;
    current_924 c(ovdue,accno,n,balc);
    c.cdeposit();
    c.cwithdraw();
    c.cdetail();
    cout<<endl;
    return 0;
}
