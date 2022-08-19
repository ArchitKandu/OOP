#include<iostream>
using namespace std;
class disM_924;
class disF_924
{
    float ft,i;
    public:
    disF_924(float feet, float inches)
    {
        ft=feet;
        i=inches;
    }
    friend void comp(disF_924,disM_924);
};
class disM_924
{
    float m,cm;
    public:
    disM_924(float meter, float centimeter)
    {
        m=meter;
        cm=centimeter;
    }
    friend void comp(disF_924,disM_924);
};
void comp(disF_924 a,disM_924 b)
{
    if((a.ft*0.0254)<b.m)
    {
        cout<<"\nDistance in Meters and Centimeters is Larger\n"<<endl;
    }
    else
    {
        cout<<"\nDistance in Feet and inches is Larger\n"<<endl;
    }
}
int main()
{
    disF_924 a(20,10);
    disM_924 b(100,60);
    comp(a,b);
    return 0;
}
