#include<iostream>
using namespace std;
int main()
{
    int x,y;
    void swap(int ,int);
    cout<<"Enter the Values of X and Y:"<<endl;
    cin>>x>>y;
    swap(x,y);
    cout<<"Main Function Values :"<<endl;
    cout<<"X= "<<x<<" and Y= "<<y<<endl;
    cout<<"Address X= "<<&x<<" and Address Y= "<<&y;
    return 0;
}
void swap(int a,int b)
{
    int t;
    t=a;a=b;b=t;
    cout<<"Swap Function"<<endl;
    cout<<"X= "<<a<<" and Y= "<<b<<endl;
    cout<<"Address X= "<<&a<<" and Address Y= "<<&b<<endl;
}
