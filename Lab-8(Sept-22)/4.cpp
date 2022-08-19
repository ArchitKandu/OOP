#include<iostream>
using namespace std;
class student
{
    char name[20];
    int age;
    int roll;
    public:
    void getdata()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Roll No.: ";
        cin>>roll;
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No.: "<<roll<<endl;
    }
};
class test:public student
{
    public:
    int marks[5];
    void get()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"Enter Marks in Subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
};
class sports:public student
{
    public:
    int sports;
    void getsports()
    {
        cout<<"Enter marks in Sports: ";
        cin>>sports;
    }
};
class result:public test,public sports
{
    public:
    void details()
    {
        int sum=0;
        float per=0;
        for(int i=0;i<5;i++)
        {
            sum=sum+marks[i];
        }
        sum=sum+sports;
        per=sum/6;
        cout<<"Total Marks: "<<sum<<endl;
        cout<<"Total Percentage: "<<per<<"%"<<endl;
    }
};
int main()
{
    result o1;
    student s1;
    cout<<"\n";
    s1.getdata();
    o1.get();
    o1.getsports();
    cout<<"\n\nDetails are: "<<endl;
    s1.show();
    o1.details();
    cout<<"\n";
    return 0;
}
