#include<iostream>
using namespace std;
template<class T>
class sort_924
{
    public:
    T a[5];
    sort_924(T arr[])
    {
        for(int i=0;i<5;i++) a[i]=arr[i];
    }
    void sort()
    {
        T temp;
        for(int i=0;i<5;i++)
        {
            for(int j=i+1;j<5;j++)
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
        for(int i=0;i<5;i++) cout<<a[i]<<" ";
    }
};
int main()
{
    int p[5]={3,2,5,4,1};
    float q[5]={3.3,2.2,5.5,4.4,1.1};
    sort_924<int>obj1(p);
    sort_924<float>obj2(q);
    cout<<"\n=====INTEGER====="<<endl;
    obj1.sort();
    cout<<"\n\n=====FLOAT====="<<endl;
    obj2.sort();
    cout<<"\n"<<endl;
    return 0;
}
