#include<iostream>
using namespace std;
class number
{
    static int c;
    int k;
    public:
    void zero()
    {
        k=0;
    }
    void count()
    {
        c++;
        k++;
        cout<<"\nValue of c: "<<c<<"\nAddress of c: "<<&c;
        cout<<"\nValue of k: "<<k<<"\nAddress of k: "<<&k;
    }
};
int number::c=0;
int main()
{
    number a,b,c;
    a.zero();
    b.zero();
    c.zero();
    a.count();
    b.count();
    c.count();
    printf("\n\n");
    return 0;
}
