#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
class data
{
    public:
    data(T1 a,T2 b,T3 c)
    {
        cout<<"\nDATA 1: "<<a<<"  DATA 2: "<<b<<"  DATA 3: "<<c<<endl;
    }
};
int main()
{
    data<int,float,char>obj1(20,20.5,'A');
    data<int,char,float>obj2(50,'P',50.15);
    cout<<endl;
    return 0;
}
