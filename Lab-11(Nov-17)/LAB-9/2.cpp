#include <iostream>
#include <string>
using namespace std;
class employee_924
{
    protected:
    string name;
    string id;
    float result;
    public:
    virtual void displayinfo()=0;
    void getData()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter ID: ";
        cin>>id;
    }
    void display()
    {
        cout<<"==========Details=========="<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
class regular_924:public employee_924
{
    public:
    float da;
    float hra;
    float bp;
    void displayinfo()
    {
        da=0.8*bp;
        hra=0.1*bp;
        result=bp+da+hra;
        cout<<"Total Salary: "<<result<<endl;
    }
};
class parttime_924:public employee_924
{
    public:
    float pph;
    float nh;
    void displayinfo()
    {
        result=pph*nh;
        cout<<"Total Salary: "<<result<<"\n"<<endl;
    }
};
int main()
{
    int ch;
    regular_924 objr;
    parttime_924 objp;
    while(1)
    {
        cout<<"\n0. Exit\n1. Regular Employee\n2. Part-Time Employee\n"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        if(ch==1)
        {
            cout<<"==========REGULAR EMPLOYEE=========="<<endl;
            objr.getData();
            cout<<"Enter Basic Pay: ";
            cin>>objr.bp;
            objr.display();
            objr.displayinfo();
        }
        else if(ch==2)
        {
            cout<<"==========PART-TIME EMPLOYEE=========="<<endl;
            objp.getData();
            cout<<"Enter Pay Per Hour: ";
            cin>>objp.pph;
            cout<<"Enter Number of Hours: ";
            cin>>objp.nh;
            objp.display();
            objp.displayinfo();
        }
        else break;
    }
    cout<<endl;
    return 0;
}
