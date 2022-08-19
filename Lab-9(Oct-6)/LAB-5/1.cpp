#include<iostream>
using namespace std;
class complex_924
{
    int real;
    int imag;
    public:
    complex_924()
    {
        real=5;
        imag=6;
        cout<<"\nDefault Constructor Invoked"<<endl;
    }
    complex_924(int r,int i)
    {
        real=r;
        imag=i;
        cout<<"Contructor with Arguements Invoked"<<endl;
    }
    complex_924(complex_924 &ob)
    {
        real=ob.real;
        imag=ob.imag;
        cout<<"Copy Constructor Invoked"<<endl;
    }
    ~complex_924()
    {
        cout<<"Destructor Invoked"<<endl;
    }
    void display()
    {
        cout<<real<<"+("<<imag<<")i"<<endl;
    }
};
int main()
{
    complex_924 obj1;
    complex_924 obj2(2,3);
    complex_924 obj3(obj2);
    cout<<"Object 1: ";
    obj1.display();
    cout<<"Object 2: ";
    obj2.display();
    cout<<"Object 3: ";
    obj3.display();
    return 0;
}
