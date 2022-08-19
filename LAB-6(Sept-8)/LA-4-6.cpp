#include<iostream>
using namespace std;
void increase(int &x)
{
    x++;
}
int main()
{
    int a;
    cout<<"\nEnter Number: ";
    cin>>a;
    cout<<"\n\nBefore Increment: "<<a<<endl;
    increase(a);
    cout<<"After Increment by 1: "<<a<<"\n"<<endl;
    return 0;
}
