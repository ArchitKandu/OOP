#include <iostream>
#include <string>
using namespace std;
class strings_924
{
    public:
    string s;
    strings_924()
    {
        s="\0";
    }
    strings_924(string sc)
    {
        s=sc;
    }
    strings_924 operator+(strings_924 sc)
    {
        strings_924 sm;
        sm=s+" "+sc.s;
        return sm;
    }
};
int main()
{
    string a,b;
    cout<<"\nEnter First String: ";
    cin>>a;
    strings_924 s1(a);
    cout<<"Enter Second String: ";
    cin>>b;
    strings_924 s2(b);
    strings_924 s3=s1+s2;
    cout<<"\nAfter Merging: "<<s3.s<<"\n"<<endl;
    return 0;
}
