#include<iostream>
using namespace std;
int sqr(int);
float sqr(float);
int main()
{
    int a=15;
    float b=2.5;
    cout<<"Square: "<<sqr(a)<<"\n";
    cout<<"Square: "<<sqr(b)<<"\n";
    return 0;
}
int sqr(int s)
{
    return (s*s);
}
float sqr(float j)
{
    return (j*j);
}
