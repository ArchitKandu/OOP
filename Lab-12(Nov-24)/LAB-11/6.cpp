#include<iostream>
using namespace std;
int main()
{
    int arr[3],ch,n=-1,data;
    while(1)
    {
        cout<<"\n0. Exit\n1. Insert"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        if(ch==1)
        {
            n++;
            if(n<3)
            {
                cout<<"Enter data: ";
                cin>>data;
                arr[n]=data;
            }
            try
            {
                if(n>=3) throw 1;
            }
            catch(int x)
            {
                cout<<"\nError: Array Out of Bound"<<endl;
                break;
            }
        }
        else if(ch==0) break;
        else cout<<"Invalid Output!!"<<endl;
    }
    cout<<endl;
    return 0;
}
