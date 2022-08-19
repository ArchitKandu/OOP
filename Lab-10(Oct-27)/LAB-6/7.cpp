#include<iostream>
using namespace std;
class account_924
{
    protected:
    int accn;
    string name;
    float bal;
    public:
    void getdata()
    {
        cout<<"\nEnter Account Number: ";
        cin>>accn;
        cout<<"Enter Name: ";
        cin>>name;
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
    void gets()
    {
        cout<<"\n\tSavings Account Holder";
        getdata();
        cout<<"Enter Minimum Balance: ";
        cin>>minbal;
    }
    void sdeposit()
    {
        cout<<"Enter Depositing Amount: ";
        cin>>ds;
        bal=ds-minbal;
    }
    void swithdraw()
    {
        int temp;
        cout<<"Enter Withdrawing Amount: ";
        cin>>ws;
        temp=bal-minbal;
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
    void getc()
    {
        cout<<"\n\tCurrent Account Holder"<<endl;
        getdata();
        cout<<"Enter Over-due Amount: ";
        cin>>ovd;
    }
    void cdeposit()
    {
        cout<<"Enter Depositing Amount: ";
        cin>>dc;
        bal=dc-ovd;
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
    savings_924 s;
    current_924 c;
    s.gets();
    s.sdeposit();
    s.swithdraw();
    s.sdetail();
    c.getc();
    c.cdeposit();
    c.cwithdraw();
    c.cdetail();
    cout<<endl;
    return 0;
}
