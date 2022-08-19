#include <iostream>
using namespace std;
class complex_924
{
    public:
    int real,img;
    complex_924()
    {
        real=0;
        img=0;
    }
    complex_924(int r,int i)
    {
        real=r;
        img=i;
    }
    void print()
    {
        if(img<0) cout<<real<<img<<"i"<<endl;
        else cout<<real<<"+"<<img<<"i"<<endl;
    }
    void operator++()
    {
        ++real;
    }
    void operator++(int)
    {
        real++;
    }
    complex_924 operator+(complex_924 c)
    {
        complex_924 temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
int main()
{
    int r1,r2,i1,i2;
    cout<<"\nFirst Complex number"<<endl;
    cout<<"Enter Real: ";
    cin>>r1;
    cout<<"Enter Imaginary: ";
    cin>>i1;
    cout<<"\nSecond Complex number"<<endl;
    cout<<"Enter Real: ";
    cin>>r2;
    cout<<"Enter Imaginary: ";
    cin>>i2;
    complex_924 obj1(r1,i1);
    complex_924 obj2(r2,i2);
    complex_924 obj3;
    obj3=obj1+obj2;
    cout<<"\nAdding both the complex numbers: ";
    obj3.print();
    ++obj3;
    cout<<"Prefix: ";
    obj3.print();
    obj3++;
    cout<<"Postfix: ";
    obj3.print();
    cout<<endl;
    return 0;
}
