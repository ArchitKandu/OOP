#include<iostream>
using namespace std;
template<class T>
void sort(T a[],int n)
{
    T temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Sorted Array is: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int main()
{
    int p[5]={3,2,5,4,1};
    float q[5]={3.3,2.2,5.5,4.4,1.1};
    cout<<"\n=====INTEGER====="<<endl;
    sort(p,5);
    cout<<"\n\n=====FLOAT====="<<endl;
    sort(q,5);
    cout<<"\n"<<endl;
    return 0;
}
