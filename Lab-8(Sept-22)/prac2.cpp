#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A()
    {
        x=10;
    }
    void showx()
    {
        cout<<"\nX= "<<x;
    }
};
class B:public A
{
    public:
    int y;
    B()
    {
        y=20;
    }
    void show()
    {
        showx();
        cout<<"\nY= "<<y<<"\n"<<endl;
    }
};
int main()
{
    B b;
    b.show();
    return 0;
}
