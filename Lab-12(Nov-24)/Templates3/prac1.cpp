#include<iostream>
using namespace std;
template<class T>
T sum(T a[],int size)
{
    T sum=0;
    for(int i=0;i<size;i++) sum=sum+a[i];
    return sum;
}
int main()
{
    int p[5]={1,2,3,4,5};
    float q[5]={1.1,2.2,3.3,4.4,5.5};
    cout<<"\nInteger Sum: "<<sum(p,5)<<endl;
    cout<<"Float Sum: "<<sum(q,5)<<endl;
    cout<<endl;
    return 0;
}
