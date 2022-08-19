#include<iostream>
using namespace std;
class A
{
    public:
    int x;
};
class B:public A
{
    public:
    int y;
};
int main()
{
    B b;
    b.x=10;
    b.y=20;
    cout<<"\nMembers of A: "<<b.x;
    cout<<"\nMembers of B: "<<b.y<<"\n"<<endl;
    return 0;
}
