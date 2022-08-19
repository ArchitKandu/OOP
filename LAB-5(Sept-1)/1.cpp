#include<iostream>
using namespace std;
class second_924;
class first_924
{
    int a;
    public:
    void getvalue1()
    {
        cout<<"\nEnter a: ";
        cin>>a;
    }
    void display1()
    {
        cout<<"\nOriginal a: "<<a<<endl;
    }
    friend void swap(first_924,second_924);
};
class second_924
{
    int b;
    public:
    void getvalue2()
    {
        cout<<"Enter b: ";
        cin>>b;
    }
    void display2()
    {
        cout<<"Original b: "<<b<<endl;
    }
    friend void swap(first_924,second_924);
};
void swap(first_924 m,second_924 n)
{
    int temp;
	temp=m.a;
	m.a=n.b;
	n.b=temp;
	cout<<"\n\nAfter swapping value at class first="<<m.a<<"\n";
	cout<<"After swapping value at class second="<<n.b<<"\n\n";
}
int main()
{
    first_924 m;
    m.getvalue1();
	second_924 n;
    n.getvalue2();
    m.display1();
    n.display2();
	swap(m,n);
    return 0;
}
