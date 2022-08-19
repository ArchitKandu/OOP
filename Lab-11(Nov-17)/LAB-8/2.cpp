#include <iostream>
using namespace std;
class array_924
{
    public:
    int arr[10];
    int e;
    int count;
    array_924()
    {
        e=0;
        count=-1;
    }
    void operator+()
    {
        arr[++count]=e;
    }
    void operator-()
    {
        if (count!=-1)
            cout<<"Deleted Element: "<<arr[count--]<<endl;
        else
            cout<<"Not Possible"<<endl;
    }
};
int main()
{
    int ch=1;
    array_924 op;
    while (ch!=0 && (ch==1||ch==2))
    {
        cout<<"\n0)Exit\n1)Insert\n2)Delete\n"<<endl;
        cout<<"Enter Choice: ";
        cin>>ch;
        if (ch==1)
        {
            cout<<"Enter a element: ";
            cin>>op.e;
            +op;
        }
        else if(ch==2)
            -op;
        else break;
    }
    return 0;
}
