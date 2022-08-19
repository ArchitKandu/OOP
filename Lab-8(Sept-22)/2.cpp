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
    int marks[5];
    public:
    void get()
    {
        getdata();
        for(int i=0;i<5;i++)
        {
            cout<<"Enter Marks in Subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void details()
    {
        show();
        for(int i=0;i<5;i++)
        {
            cout<<"Marks in Subject "<<i+1<<": "<<marks[i]<<endl;
        }
    }
};
int main()
{
    test o1;
    cout<<"\n";
    o1.get();
    cout<<"\n\nDetails are: "<<endl;
    o1.details();
    cout<<"\n";
    return 0;
}
