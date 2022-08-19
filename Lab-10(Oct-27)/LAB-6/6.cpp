#include<iostream>
using namespace std;
class employee_924
{
    protected:
    string name;
    int id;
    float salary;
    public:
    void getdata()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter ID: ";
        cin>>id;
    }
    void display()
    {
        cout<<"\n\n\tEmployee Details"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
class regular_924: public employee_924
{
    protected:
    int bp;
    float da;
    float hra;
    public:
    void getr()
    {
        cout<<"\n\tRegular"<<endl;
        getdata();
        cout<<"Enter Basic Pay: ";
        cin>>bp;
    }
    void rsal()
    {
        da=0.8*bp;
        hra=0.1*bp;
        salary=bp+da+hra;
        display();
        cout<<"Salary: "<<salary<<endl;
    }
};
class parttimer_924: public employee_924
{
    protected:
    int nhr;
    int pphr;
    public:
    void getpt()
    {
        cout<<"\n\tPart-Timer"<<endl;
        getdata();
        cout<<"Enter Number of Hours: ";
        cin>>nhr;
        cout<<"Enter Pay per Hour: ";
        cin>>pphr;
    }
    void ptsal()
    {
        salary=nhr*pphr;
        display();
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    regular_924 r;
    parttimer_924 p;
    r.getr();
    r.rsal();
    p.getpt();
    p.ptsal();
    cout<<endl;
    return 0;
}
