#include<iostream>
using namespace std;
void num(char c='*',int n=80)
{
	while (n>0)
	{
	    cout<<c;
	    n--;
	}
	cout<<endl;	
}
int main()
{
    cout<<"\n";
	num('A',7);
	num('A');
	num();
    cout<<"\n";
    return 0;
}
