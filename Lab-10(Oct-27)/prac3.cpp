#include<iostream>
using namespace std;
class shape
{
    protected:
    float d1,d2;
    public:
    void getd()
    {
        cout<<"Enter Dimention: ";
        cin>>d1>>d2;
    }
    virtual float area()=0;
};
class triangle: public shape
{
    public:
    float area()
    {
        return 0.5*d1*d2;
    }
};
class rectangle: public shape
{
    public:
    float area()
    {
        return d1*d2;
    }
};
int main()
{
    triangle t;
    cout<<"Triangle"<<endl;
    t.getd();
    cout<<"Area of triangle: "<<t.area()<<endl;
    rectangle r;
    cout<<"Rectangle"<<endl;
    r.getd();
    cout<<"Area of rectangle: "<<r.area()<<endl;
    return 0;
}
