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
    void show()
    {
        cout<<data;
    }
    A func(A obj)
    {
        data=obj.data;
        return obj;
    }
};
int main()
{
    A obj1(10);
    A obj3(obj3.func(obj1));
    cout<<"\nCondition 2 & 3: (When an object is passed and return by value for a function)"<<endl;
    cout<<"\nValue of Obj3: ";
    obj3.show();
    cout<<"\n\n";
    return 0;
}
