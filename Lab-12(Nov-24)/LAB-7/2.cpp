#include<iostream>
using namespace std;
class A_924
{
    public:
    A_924()
    {
        cout<<"Base class A Constructor"<<endl;
    }
    ~A_924()
    {
        cout<<"Base class A Destructor\n"<<endl;
    }
};
class B_924:public A_924
{
    public:
    B_924()
    {
        cout<<"Base class B Constructor"<<endl;
    }
    ~B_924()
    {
        cout<<"Base class B Destructor"<<endl;
    }
};
class C_924:public B_924
{
    public:
    C_924()
    {
        cout<<"Derived class C Constructor"<<endl;
    }
    ~C_924()
    {
        cout<<"Derived class C Destructor"<<endl;
    }
};
int main()
{
    cout<<endl;
    C_924 obj;
    return 0;
}
