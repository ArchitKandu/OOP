#include<iostream>
using namespace std;
class time_924
{
    int hour;
    int min;
    public:
    time_924()
    {
        hour=5;
        min=6;
        cout<<"\nDefault Constructor Invoked"<<endl;
    }
    time_924(int h,int m=0)
    {
        hour=h;
        min=m;
        if(m==0)
        cout<<"Contructor with Default Arguements Invoked"<<endl;
        else
        cout<<"Contructor with Arguements Invoked"<<endl;
    }
    time_924(time_924 &ob)
    {
        hour=ob.hour;
        min=ob.min;
        cout<<"Copy Constructor Invoked"<<endl;
    }
    void display()
    {
        cout<<hour<<":"<<min<<endl;
    }
};
int main()
{
    time_924 obj1;
    time_924 obj2(2,3);
    time_924 obj3(5);
    time_924 obj4(obj2);
    cout<<"hh:mm 1: ";
    obj1.display();
    cout<<"hh:mm 2: ";
    obj2.display();
    cout<<"hh:mm 3: ";
    obj3.display();
    cout<<endl;
    return 0;
}
