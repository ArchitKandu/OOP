#include<iostream>
#include<string>
using namespace std;
class student_924
{
    protected:
    string name;
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
class test_924:virtual public student_924
{
    protected:
    float marks[5];
    public:
    void getmarks()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"Enter Marks in Subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void details()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"Marks in Subject "<<i+1<<": "<<marks[i]<<endl;
        }
    }
};
class sports_924:virtual public student_924
{
    protected:
    float sm;
    public:
    void sget()
    {
        cout<<"Enter Marks in sports: ";
        cin>>sm;
    }
    void sshow()
    {
        cout<<"Marks in sports: "<<sm<<endl;
    }
};
class result_924:public test_924,public sports_924
{
    protected:
    float total=0;
    float per=0;
    public:
    void get()
    {
        getdata();
        getmarks();
        sget();
        for(int i=0;i<5;i++) total=total+marks[i];
        total=total+sm;
        per=total/6;
    }
    void display()
    {
        show();
        details();
        sshow();
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Total percentage: "<<per<<"%"<<endl;
    }
};
int main()
{
    result_924 o1;
    cout<<"\n";
    o1.get();
    cout<<"\n\n------Details are------"<<endl;
    o1.display();
    cout<<"\n";
    return 0;
}
