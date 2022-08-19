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
class B_924:virtual public A_924
{
    public:
    B_924()
    {
        cout<<"Derived class B constructor"<<endl;
    }
    ~B_924()
    {
        cout<<"Derived class B destructor"<<endl;
    }
};
class C_924:virtual public A_924
{
    public:
    C_924()
    {
        cout<<"Derived class C constructor"<<endl;
    }
    ~C_924()
    {
        cout<<"Derived class C destructor"<<endl;
    }
};
class D_924:public B_924,public C_924
{
    public:
    D_924()
    {
        cout<<"Sub-Derived class D constructor"<<endl;
    }
    ~D_924()
    {
        cout<<"Sub-Derived class D destructor"<<endl;
    }
};
int main()
{
    cout<<endl;
    D_924 obj;
    return 0;
}
