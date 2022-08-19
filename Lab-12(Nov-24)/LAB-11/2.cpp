#include<iostream>
using namespace std;
template<class T1,class T2>
void display(T1 a,T2 b)
{
    cout<<"First Data: "<<a<<"  Size: "<<sizeof(a)<<endl;
    cout<<"Second Data: "<<b<<"  Size: "<<sizeof(b)<<"\n"<<endl;
}
int main()
{
    cout<<"\n=====Integer and Float====="<<endl;
    display(2,2.2);
    cout<<"\n=====Integer and Character====="<<endl;
    display(2,'A');
    cout<<"\n=====Float and Character====="<<endl;
    display(2.2,'A');
    return 0;
}
