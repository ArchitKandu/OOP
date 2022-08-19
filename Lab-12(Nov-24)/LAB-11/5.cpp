#include<iostream>
using namespace std;
int main()
{
    float n,d,result;
    cout<<"\nEnter Numerator and Denominator: ";
    cin>>n>>d;
    if(d!=0)
    {
        result=n/d;
        cout<<"Result is: "<<result<<"\n"<<endl;
    }
    try
    {
        throw 1;
    }
    catch(int x)
    {
        cout<<"\nMathematical Error: Division by 0 Detected!!\n"<<endl;
    }
    return 0;
}
