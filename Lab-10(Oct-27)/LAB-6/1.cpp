#include<iostream>
using namespace std;
class A_924
{
    public:
    void AA()
    {
        cout<<"CLASS A: BASE CLASS"<<endl;
    }
};
class B_924
{
    public:
    void BB()
    {
        cout<<"CLASS B: BASE CLASS"<<endl;
    }
};
class C_924: public A_924
{
    public:
    void CC()
    {
        cout<<"CLASS C: SINGLE INHERITANCE OF A"<<endl;
    }
};
class D_924: public A_924,B_924
{
    public:
    void DD()
    {
        cout<<"CLASS D: MULTIPLE INHERITANCE OF A AND B"<<endl;
    }
};
class E_924: public A_924
{
    public:
    void EE()
    {
        cout<<"CLASS E: SINGLE INHERITANCE OF A"<<endl;
        cout<<"THIS MAKES HIERARCHICAL INHERITANCE i.e. A: BASE, C & E: DERIVED FROM A"<<endl;
    }
};
class F_924: public E_924
{
    public:
    void FF()
    {
        cout<<"CLASS F: MULTILEVEL INHERITANCE OF A TO E TO F"<<endl;
    }
};
class G_924: public E_924,B_924
{
    public:
    void GG()
    {
        cout<<"CLASS G: HYBRID INHERITANCE OF {E(SINGLE) AND B}(MULTIPLE)"<<endl;
    }
};
class H_924: public C_924,E_924
{
    public:
    void HH()
    {
        cout<<"CLASS H: MULTIPATH INHERITANCE A TO (C,E) TO H"<<endl;
    }
};
int main()
{
    A_924 a;
    B_924 b;
    C_924 c;
    D_924 d;
    E_924 e;
    F_924 f;
    G_924 g;
    H_924 h;
    cout<<"\n"<<endl;
    a.AA();
    b.BB();
    c.CC();
    d.DD();
    e.EE();
    f.FF();
    g.GG();
    h.HH();
    cout<<"\n"<<endl;
    return 0;
}
