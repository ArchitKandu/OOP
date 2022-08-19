#include<iostream>
using namespace std;
class shape
{
    public:
    float area;
};
class circle:public shape
{
    public:
    int r;
    void getradius()
    {
        cout<<"Enter Radius of Circle: ";
        cin>>r;
    }
    void carea()
    {
        area=3.14*r*r;
        cout<<"Area of Circle: "<<area<<"\n"<<endl;
    }
};
class triangle:public shape
{
    public:
    int h;
    int b;
    void gettri()
    {
        cout<<"Enter Height of Triangle: ";
        cin>>h;
        cout<<"Enter Breadth of Triangle: ";
        cin>>b;
    }
    void tarea()
    {
        area=0.5*h*b;
        cout<<"Area of Triangle: "<<area<<"\n"<<endl;
    }
};
class rectangle:public shape
{
    public:
    int l;
    int b;
    void getrect()
    {
        cout<<"Enter length of Rectangle: ";
        cin>>l;
        cout<<"Enter Breadth of Rectangle: ";
        cin>>b;
    }
    void rarea()
    {
        area=l*b;
        cout<<"Area of Rectangle: "<<area<<endl;
    }
};
int main()
{
    circle c1;
    triangle t1;
    rectangle r1;
    cout<<"\n";
    c1.getradius();
    c1.carea();
    t1.gettri();
    t1.tarea();
    r1.getrect();
    r1.rarea();
    cout<<"\n\n";
    return 0;
}
