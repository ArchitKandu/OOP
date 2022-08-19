#include<iostream>
using namespace std;
class a_924
{
    public:
    static int i;
    static int o;
    void input()
    {
        i++;
    }
    void output()
    {
        o++;
    }
    void display()
    {
        cout<<"\nINPUT is called "<<i<<" times!!"<<endl;
        cout<<"\nOUTPUT is called "<<o<<" times!!\n"<<endl;
    }
};
int a_924::i=0;
int a_924::o=0;
int main()
{
    int choice,i=0;
    a_924 c;
    while(1)
    {
        cout<<"\nEnter 1 to call Input"<<endl;
        cout<<"\nEnter 2 to call Output"<<endl;
        cout<<"\nEnter 0 to exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        if(choice==1) c.input();
        else if(choice==2) c.output();
        else if(choice==0) break;
    }
    cout<<"\nResult is:-"<<endl;
    c.display();
    return 0;
}
