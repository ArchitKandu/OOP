#include<iostream>
using namespace std;
template<class T1,class T2>
class data
{
    public:
    data(T1 a, T2 b)
    {
        cout<<"\nData 1: "<<a<<" Data 2: "<<b<<endl;
    }
};
int main()
{
    data<int,float>it(20,20.5);
    data<int,char>ic(20,'A');
    data<float,char>fc(20.5,'A');
    cout<<endl;
    return 0;
}
