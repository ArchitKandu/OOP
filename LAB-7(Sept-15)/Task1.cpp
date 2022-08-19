#include<iostream>
using namespace std;
class A
{
    int data;
    public:
    A(int k)
    {
        data=k;
    }
    A(A &obj1)
    {
        data=obj1.data;
    }
    void show()
    {
        cout<<data;
    }
};
int main()
{
    A obj1(10);
    A obj2(obj1);
    cout<<"\nCondition 1: (When New object is created using existing object)"<<endl;
    cout<<"\nValue at Obj1(Normal Constructor): ";
    obj1.show();
    cout<<"\nValue at Obj2(Copy Constructor): ";
    obj2.show();
    cout<<"\n\n";
    return 0;
}
