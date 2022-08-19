#include <iostream>
using namespace std;
class Distance_924
{
    public:
    int feet;
    int inches;
    Distance_924()
    {
        feet=0;
        inches=0;
    }
    Distance_924(int f,int i)
    {
        feet=f;
        inches=i;
    }
    Distance_924 operator+(Distance_924 d)
    {
        Distance_924 sum;
        sum.feet=(feet+d.feet)+((inches+d.inches)/12);
        sum.inches=(inches+d.inches)%12;
        return sum;
    }
    Distance_924 operator-()
    {
        feet= -feet;
        inches= -inches;
        return Distance_924(feet,inches);
    }
};
int main()
{
    int i1,f1,f2,i2;
    char ch;
    cout<<"\nFirst Distance in Feet and Inches"<<endl;
    cout<<"Enter Feet: ";
    cin>>f1;
    cout<<"Enter Inches: ";
    cin>>i1;
    Distance_924 d1(f1,i1);
    cout<<"\nSecond Distance in Feet and Inches"<<endl;
    cout<<"Enter Feet: ";
    cin>>f2;
    cout<<"Enter Inches: ";
    cin>>i2;
    Distance_924 d2(f2,i2);
    Distance_924 d3=d1+d2;
    cout << "\nFinal Distance(Addition): "<<d3.feet<<" Feet "<<d3.inches<<" Inches "<<endl;
    Distance_924 d4(f1,i1);
    -d4;
    cout<<"Final Distance(unary Subtraction): "<<d4.feet<<" Feet "<<d4.inches<<" Inches \n"<<endl;
    return 0;
}
