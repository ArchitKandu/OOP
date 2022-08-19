#include<iostream>
using namespace std;
int main()
{
    int sum(int a, int b=10,int c=15,int d=20);
    int a=2;
    int b=3; 
    int c=4;
    int d=5;
    cout<<"Sum="<<sum(a,b,c,d)<<"\n";
    cout<<"Sum="<<sum(a,b,c)<<"\n";
    cout<<"Sum="<<sum(a,b)<<"\n";
    cout<<"Sum="<<sum(a)<<"\n";
    cout<<"Sum="<<sum(b,c,d)<<"\n";
    cout<<"Sum="<<sum(c,d)<<"\n";
    return 0;
}
sum(int i, int j,int k,int l)
{
    return (i+j+k+l);
}
