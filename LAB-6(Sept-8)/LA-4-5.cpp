#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;
    cout<<"\nBefore swapping:\na: "<<a<<"\tb: "<<b<<endl;
    swap(a,b);
    cout<<"\nAfter swapping:\na: "<<a<<"\tb: "<<b<<endl;
    return 0;
}
