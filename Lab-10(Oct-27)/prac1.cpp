#include<iostream>
using namespace std;
class A
{
    public:
    virtual void print()
    {
        cout<<"BASE CLASS"<<endl;
    }
};
class B: public A
{
    public:
    void print()
    {
        cout<<"DERIVED CLASS"<<endl;
    }
};
int main()
{
    A *p,o1;
    B o2;
    p=&o2;
    p->print();
    return 0;
}
