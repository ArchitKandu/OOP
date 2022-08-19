#include<iostream>
using namespace std;
class A_924
{
    static int count;
    public:
    A_924()
    {
        count++;
    }
    static void showcount()
    {
        cout<<"\nTotal Object Created: "<<count<<endl<<endl;
    }
};
int A_924::count=0;
int main()
{
    int ch;
    while(1)
    {
        cout<<"\n1. Call Object"<<"\n0. Exit"<<endl;
        cout<<"\nEnter Choice: ";
        cin>>ch;
        if(ch==1) A_924 ob;
        else if(ch==0) break;
        else cout<<"Invalid Value!!!"<<endl;
    }
    A_924::showcount();
    return 0;
}
