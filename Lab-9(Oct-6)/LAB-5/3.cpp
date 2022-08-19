#include<iostream>
#include<cstring>
using namespace std;
class str_924
{
    string st;
    int len;
    public:
    str_924()
    {
        st="String";
        len=st.size();
        cout<<"\nDefault Arguement Invoked"<<endl;
    }
    str_924(string s)
    {
        st=s;
        len=st.size();
        cout<<"Constructor with Arguements Invoked"<<endl;
    }
    str_924(str_924 &ob)
    {
        st=ob.st;
        len=ob.len;
        cout<<"Copy Contructor Invoked"<<endl;
    }
    static void join(str_924 &ob1,str_924 &ob2)
    {
        string st1=ob1.st;
        string st2=ob2.st;
        string st3=st1+st2;
        cout<<"Result is: "<<st3<<endl;
    }
};
int main()
{
    str_924 obj1;
    str_924 obj2("Copy");
    str_924 obj3(obj2);
    str_924::join(obj1,obj2);
    cout<<endl;
    return 0;
}
