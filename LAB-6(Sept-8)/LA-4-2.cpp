#include<iostream>
using namespace std;
int main()
{
   float vol(float);
   float vol(int ,int);
   int vol(int ,int, int);

   cout<<"\nVolume of Sphere: "<<vol(3)<<endl;
   cout<<"Volume of Cylinder: "<<vol(3,6)<<endl;
   cout<<"Volume of Cuboid: "<<vol(3,6,9)<<endl;
   cout<<"\n";
   return 0;
}

float vol(float a)
{
   float s=4*22*a*a*a;
   return (s/21);
}

float vol(int p,int q)
{
   float r=22*p*p*q;
   return (r/7);
}

int vol(int c,int d,int e)
{
   return (c*d*e);
}
