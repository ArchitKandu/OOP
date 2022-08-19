#include<iostream>
using namespace std;
template<class T1,class T2>
class display_924
{
    public:
    T1 a;
    T2 b;
    display_924(T1 x,T2 y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"First Data: "<<a<<"  Size: "<<sizeof(a)<<endl;
        cout<<"Second Data: "<<b<<"  Size: "<<sizeof(b)<<"\n"<<endl;
    }
};
int main()
{
    display_924<int,float>obj1(2,2.2);
    display_924<int,char>obj2(2,'A');
    display_924<float,char>obj3(2.2,'A');
    cout<<"\n=====Integer and Float====="<<endl;
    obj1.display();
    cout<<"\n=====Integer and Character====="<<endl;
    obj2.display();
    cout<<"\n=====Float and Character====="<<endl;
    obj3.display();
    return 0;
}
