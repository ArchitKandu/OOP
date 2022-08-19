#include<iostream>
using namespace std;
class shape_924
{
    protected:
    float area;
};
class circle_924: public shape_924
{
    protected:
    int r;
    public:
    void getc()
    {
        cout<<"\nCircle"<<endl;
        cout<<"Enter Radius: ";
        cin>>r;
    }
    void carea()
    {
        area=(float)3.14*r*r;
        cout<<"Area of Circle: "<<area<<endl;
    }
};
class triangle_924: public shape_924
{
    protected:
    int b;
    int h;
    public:
    void gett()
    {
        cout<<"\nTriangle"<<endl;
        cout<<"Enter base: ";
        cin>>b;
        cout<<"Enter Height: ";
        cin>>h;
    }
    void tarea()
    {
        area=(float)0.5*b*h;
        cout<<"Area of Triangle: "<<area<<"\n"<<endl;
    }
};
class rectangle_924: public shape_924
{
    protected:
    int l;
    int b;
    public:
    void getr()
    {
        cout<<"\nRectangle"<<endl;
        cout<<"Enter Length: ";
        cin>>l;
        cout<<"Enter Breadth: ";
        cin>>b;
    }
    void rarea()
    {
        area=(float)l*b;
        cout<<"Area of Circle: "<<area;
    }
};
int main()
{
    circle_924 c;
    triangle_924 t;
    rectangle_924 r;
    c.getc();
    c.carea();
    t.gett();
    t.tarea();
    r.getr();
    r.rarea();
    return 0;
}
