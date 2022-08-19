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
        getdata();
        for(int i=0;i<5;i++)
        {
            cout<<"Enter Marks in Subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
};
class result:public test
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
        per=sum/5;
        show();
        cout<<"Total Marks: "<<sum<<endl;
        cout<<"Total Percentage: "<<per<<"%"<<endl;
    }
};
int main()
{
    result o1;
    cout<<"\n";
    o1.get();
    cout<<"\n\nDetails are: "<<endl;
    o1.details();
    cout<<"\n";
    return 0;
}
