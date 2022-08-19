#include<iostream>
using namespace std;
class employee
{
    char name[30];
    int age;
    public:
    void getdata();
    void putdata();
};
void employee::getdata()
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
}
void employee::putdata()
{
    cout<<"Name: "<<name<<"\n";
    cout<<"Age: "<<age<<"\n";
}
const int size=2;
int main()
{
    employee manager[size];
    for(int i=0;i<size;i++)
    {
        cout<<"\nDetails of Manager "<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        cout<<"\nManager "<<i+1<<"\n";
        manager[i].putdata();
        cout<<"\n";
    }
    return 0;
}
