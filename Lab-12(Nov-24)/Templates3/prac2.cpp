#include<iostream>
using namespace std;
template<class T>
T sum(T a,T b)
{
    return a+b;
}
template<class T>
T sum(T a,T b,T c)
{
    return a+b+c;
}
int main()
{
    cout<<"\nTwo Int Sum: "<<sum(10,20)<<endl;
    cout<<"\nTwo Float Sum: "<<sum(10.15,20.15)<<endl;
    cout<<"\nThree Int Sum: "<<sum(10,20,30)<<endl;
    cout<<"\nThree Float Sum: "<<sum(10.15,20.15,30.15)<<"\n"<<endl;
    return 0;
}
