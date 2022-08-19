#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"\n=====TESTING MULTIPLE CATCH====="<<endl;
    cout<<"Enter x: ";
    cin>>x;
    try
    {
        cout<<"\nWelcome to Execption Handling!!"<<endl;
        if(x>0) throw x;
        else throw 'X';
    }
    catch(int x)
    {
        cout<<"Value is: "<<x<<endl;
        cout<<"Integer Catch is Demonstrated!!\n"<<endl;
    }
    catch(char x)
    {
        cout<<"Value is: "<<x<<endl;
        cout<<"Character Catch is Demonstrated!!\n"<<endl;
    }
    return 0;
}
