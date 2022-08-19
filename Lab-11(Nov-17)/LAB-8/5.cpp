#include<iostream>
using namespace std;
class time_924
{
    public:
    int hr;
    int min;
    int sec;
    time_924()
    {
        hr=0;
        min=0;
        sec=0;
    }
    time_924(int h,int m,int s)
    {
        hr=h;
        min=m;
        sec=s;
    }
    void operator==(time_924 obj)
    {
        if((hr==obj.hr) && (min==obj.min) && (sec==obj.sec))
            cout<<"\nBoth The Times are Same!!\n"<<endl;
        else cout<<"\nBoth The Times are Not Same!!\n"<<endl;
    }
};
int main()
{
    int h1,m1,s1,h2,m2,s2;
    cout<<"\n====First Time===="<<endl;
    cout<<"Enter Hour: ";
    cin>>h1;
    cout<<"Enter Minute: ";
    cin>>m1;
    cout<<"Enter Seconds: ";
    cin>>s1;
    time_924 obj1(h1,m1,s1);
    cout<<"\n====Second Time===="<<endl;
    cout<<"Enter Hour: ";
    cin>>h2;
    cout<<"Enter Minute: ";
    cin>>m2;
    cout<<"Enter Seconds: ";
    cin>>s2;
    time_924 obj2(h2,m2,s2);
    obj1==obj2;
    return 0;
}
