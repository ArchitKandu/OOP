#include<iostream>
using namespace std;
class studnt_924
{
    protected:
    string name;
    int roll;
    int age;
    public:
    void ip()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Roll: ";
        cin>>roll;
        cout<<"Enter Age: ";
        cin>>age;
    }
};
class test_924: public studnt_924
{
    protected:
    int marks[5];
    public:
    void get()
    {
        ip();
        for(int i=0;i<5;i++)
        {
            cout<<"Enter Marks of Subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        for(int i=0;i<5;i++) cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;
    }
};
class sports_924: public studnt_924
{
    protected:
    int sp;
    public:
    void getsp()
    {
        cout<<"Enter Marks in Sports: ";
        cin>>sp;
    }
};
class result_924: public test_924, sports_924
{
    protected:
    int total;
    float per;
    int stotal;
    float sper;
    public:
    void res1()
    {
        get();
        display();
        for(int j=0;j<5;j++)
        {
            total=total+marks[j];
        }
        per=(float)total/5;
        cout<<"\nTOTAL MARKS WITHOUT SPORTS: "<<total<<endl;
        cout<<"\nPERCENTAGE WITHOUT SPORTS: "<<per<<endl;
    }
    void res2()
    {
        getsp();
        stotal=total+sp;
        sper=(float)stotal/6;
        cout<<"\nTOTAL MARKS WITH SPORTS: "<<stotal<<endl;
        cout<<"\nPERCENTAGE WITH SPORTS: "<<sper<<endl;
    }
};
int main()
{
    result_924 r1;
    cout<<endl;
    r1.res1();
    cout<<endl;
    r1.res2();
    cout<<"\n"<<endl;
    return 0;
}
