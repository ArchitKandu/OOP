#include<iostream>
using namespace std;
int main()
{
	float area(float);
	int area(int,int);
	double area(int,double);
	cout<<"\nArea of Circle: "<<area(5)<<endl;
	cout<<"Area of Rectangle: "<<area(5,10)<<endl;
	cout<<"Area of Triangle: "<<area(5,10.0)<<endl;
    cout<<"\n";
    return 0;
}
float area(float p)
{
	return (3.14*p*p);
}
int area(int p,int q)
{
	return (p*q);
}
double area(int p,double q)
{
	return (0.5*p*q);
}
