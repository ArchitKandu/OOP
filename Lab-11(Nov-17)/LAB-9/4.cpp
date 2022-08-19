#include <iostream>
using namespace std;
class base_924
{
    public:
    virtual void fun()=0;
};

class derived_924:public base_924
{
    public:
    void fun()
    {
        cout<<"\nfun() is called\n"<<endl;
    }
};

int main()
{
    derived_924 d;
    d.fun();
    return 0;
}
