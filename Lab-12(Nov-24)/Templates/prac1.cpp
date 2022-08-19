#include<iostream>
using namespace std;
template<class T>
class data
{
    public:
    data(T c)
    {
        cout<<"\nData: "<<c<<"  Size: "<<sizeof(c)<<" Bytes"<<endl;
    }
};
int main()
{
    data<int>a(20);
    data<char>b('A');
    data<float>c(20.15);
    cout<<endl;
    return 0;
}
