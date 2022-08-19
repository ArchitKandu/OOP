#include<iostream>
using namespace std;
class first
{
    protected:
    int a;
    public:
    first()
    {
        a=10;
    }
    virtual void display()=0;
};
class second: public first
{
    protected:
    int b;
    public:
    second()
    {
        b=20;
    }
    void display()
    {
        cout<<"\na = "<<a<<" b = "<<b<<endl;
    }
};
int main()
{
    first *p;
    second s;
    p=&s;
    p->display();
    return 0;
}
