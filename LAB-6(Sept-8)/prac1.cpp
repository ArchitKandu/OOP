#include<iostream>
using namespace std;
class number
{
    static int c;
    public:
    void count()
    {
        c++;
        cout<<"\nC = "<<c;
    }
};
int number::c=0;
int main()
{
    number a,b,c;
    a.count();
    b.count();
    c.count();
    cout<<"\n\n";
    return 0;
}
