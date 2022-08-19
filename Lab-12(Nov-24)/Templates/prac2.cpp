#include<iostream>
using namespace std;
template<class T>
void show(T a)
{
    cout<<"\nData: "<<a<<endl;
}
int main()
{
    int i=20;
    float f=20.15;
    char c='A';
    show(i);
    show(f);
    show(c);
    cout<<endl;
    return 0;
}
