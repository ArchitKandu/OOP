#include<iostream>
using namespace std;
template<class T>
class data
{
    T x;
    public:
    data(T a)
    {
        x=a;
    }
    void show(T y)
    {
        cout<<"X = "<<x<<" Y = "<<y<<endl;
    }
};
int main()
{
    data<char>c('A');
    data<int>i(25);
    data<float>f(20.56);
    c.show('P');
    i.show(35);
    f.show(30.75);
    cout<<endl;
    return 0;
}
