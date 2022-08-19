#include<iostream>
using namespace std;
int main()
{
    int x;
    void funcA(int);
    void funcB(int &);
    void funcC(int *);
    cout<<"Enter the Value of X:"<<endl;
    cin>>x;
    funcA(x);
    cout<<"\nX= "<<x<<endl;
    cout<<"Address X= "<<&x<<endl;
    funcB(x);
    cout<<"X= "<<x<<endl;
    cout<<"Address X= "<<&x<<endl;
    funcC(&x);
    cout<<"X= "<<x<<endl;
    cout<<"Address X= "<<&x<<endl;
    return 0;
}
void funcA(int a)//Call by Value
{
    a++;
}
void funcB(int &a)//Call by reference
{
    a++;
}
void funcC(int *a)//Call By Address
{
    ++a;
}
