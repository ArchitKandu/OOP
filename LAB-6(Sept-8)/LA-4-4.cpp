#include<iostream>
using namespace std;
class pow
{
    int n;
    public:
    void getvalue()
    {
        cout<<"\nEnter n: ";
        cin>>n;
    }
    inline void squ()
    {
        cout<<"\nSquare: "<<n*n;
    }
    inline void cube()
    {
        cout<<"\nCube: "<<n*n*n;
    }
};
int main()
{
    pow p;
    p.getvalue();
    p.squ();
    p.cube();
    cout<<"\n\n";
    return 0;
}
