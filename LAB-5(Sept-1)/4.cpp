#include<iostream>
using namespace std; 
class student_924
{
    char name[20];
    int roll;
    float marks;
    static float total;
    static float avg;
    public:
    void input(int i)
    {
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Roll No.: ";
        cin>>roll;
        cout<<"Enter Marks: "; 
        cin>>marks;
        total=total+marks;
    }
    friend float tot(int,student_924);
};
float tot(int n,student_924 a)
{
    a.avg=a.total/n;
    return a.avg;
}
float student_924::total=0;
float student_924::avg=0;
int main()
{
    int n;
    student_924 s[10];
    cout<<"\nEnter Total Students: ";
    cin>>n;
    for(int i=0; i<n;i++) s[i].input(i);
    cout<<"\n\nAverage Marks of "<<n<<" Students is: "<<tot(n,s[n-1])<<"\n"<<endl;
    return 0;
}
