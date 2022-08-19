#include<iostream>
using namespace std;
template<class T>
class data
{
    T a,b;
    public:
    void get()
    {
        cin>>a>>b;
    }
    void sum()
    {
        cout<<"\nSum is: "<<a+b<<endl;
    }
};
int main()
{
    data<int>i;
    data<float>f;
    cout<<"\n-----Integer-----"<<endl;
    cout<<"Enter Integers: ";
    i.get();
    i.sum();
    cout<<"\n-----Float-----"<<endl;
    cout<<"Enter Integers: ";
    f.get();
    f.sum();
    cout<<endl;
    return 0;
}
