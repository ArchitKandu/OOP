#include <iostream>
#include <math.h>
using namespace std;
class shape_924
{
    public:
    float result;
    virtual void area()=0;
};
class circle_924:public shape_924
{
    public:
    float r;
    void area()
    {
        result=(r*r*22.0)/7.0;
        cout<<"Area of Circle: "<<result<<endl;
    }
};
class triangle_924:public shape_924
{
    public:
    float a;
    float b;
    float c;
    float s;
    void area()
    {
        s=(a+b+c)/2.0;
        result=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of Triangle: "<<result<<endl;
    }
};
class rectangle_924: public shape_924
{
    public:
    float l;
    float b;
    void area()
    {
        result=l*b;
        cout<<"Area of Rectangle: "<<result<<"\n"<<endl;
    }
};
int main()
{
    circle_924 obj1;
    triangle_924 obj2;
    rectangle_924 obj3;
    cout<<"\n-------CIRCLE-------"<<endl;
    cout<<"Enter Radius: ";
    cin>>obj1.r;
    obj1.area();
    cout<<"\n------TRIANGLE------"<<endl;
    cout<<"Enter 3 Sides: ";
    cin>>obj2.a>>obj2.b>>obj2.c;
    obj2.area();
    cout<<"\n-----RECTANGLE------"<<endl;
    cout<<"Enter Length and Breadth: ";
    cin>>obj3.l>>obj3.b;
    obj3.area();
    return 0;
}
