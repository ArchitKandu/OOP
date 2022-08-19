#include<iostream>
using namespace std;
class distance_924
{
    public:
    float dist;
    distance_924()
    {
        dist=0;
    }
    distance_924(float d)
    {
        dist=d;
    }
    distance_924 operator>(distance_924 obj)
    {
        distance_924 dis;
        if(dist>obj.dist) dis.dist=dist;
        else if(obj.dist>dist) dis.dist=obj.dist;
        return dis;
    }
    int operator==(distance_924 obj)
    {
        if(obj.dist==dist) return 1;
        else return 0; 
    }
    distance_924 add(distance_924 obj)
    {
        distance_924 distance;
        distance.dist=obj.dist+dist;
        return distance;
    }
};
int main()
{
    float d1,d2;
    int r;
    cout<<"\nEnter First Distance: ";
    cin>>d1;
    cout<<"Enter Second Distance: ";
    cin>>d2;
    distance_924 obj1(d1);
    distance_924 obj2(d2);
    r=obj1==obj2;
    distance_924 obj3=obj1.add(obj2);
    cout<<"\nAdding Both Distances: "<<obj3.dist<<endl;
    if(r==1) cout<<"\nBoth Distances are Same!!\n"<<endl;
    else
    {
        cout<<"\nBoth Distances are Not Same!!"<<endl;
        distance_924 larger;
        larger=obj1>obj2;
        cout<<larger.dist<<" is the Larger Distance!!\n"<<endl;
    }
    return 0;
}
