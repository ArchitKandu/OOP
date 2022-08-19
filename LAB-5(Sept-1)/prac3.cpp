#include<iostream>
using namespace std;
class ac
{
    private:
    char name[15];
    int acno;
    float bal;
    public:
    void read()
    {
        cout<<"\nName: ";
        cin>>name;
        cout<<"\nAcc No.: ";
        cin>>acno;
        cout<<"\nBalance: ";
        cin>>bal;
    }
    friend void showbal(ac);
};
void showbal(ac a)
{
    cout<<"Balance of Acc no.: "<<a.acno<<" is Rs. "<<a.bal;
}
int main()
{
    ac k;
    k.read();
    showbal(k);
    return 0;
}
