#include<iostream>
using namespace std;
template<class T>
class squr
{
    public:
    squr(T a)
    {
        cout<<"\nSquare of "<<a<<" is "<<a*a<<endl;
    }
};
int main()
{
    squr<int>i(17);
    squr<float>f(15.57);
    cout<<endl;
    return 0;
}
