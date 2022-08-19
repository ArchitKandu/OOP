#include<iostream>
using namespace std; 
class books_924
{
    char name[20];
    char author[20];
    float price;
    public:
    void input(int i)
    {
        cout<<"\nBook "<<i+1<<endl;
        cout<<"Enter Book's Name: ";
        cin>>name;
        cout<<"Enter Author's Name: ";
        cin>>author;
        cout<<"Enter Price: "; 
        cin>>price;
    }
    friend void disp(int,books_924*);
};
void disp(int n,books_924 b[])
{
    int st,end;
    cout<<"\nEnter Start of Range: ";
    cin>>st;
    cout<<"Enter End of Range: ";
    cin>>end;
    for(int i=0;i<n;i++)
    {
        if(b[i].price>=st && b[i].price<=end)
        {
            cout<<"\nBook's Name: "<<b[i].name<<endl;
            cout<<"Author's Name: "<<b[i].author<<endl;
            cout<<"Price: "<<b[i].price<<endl;
        }
    }
}
int main()
{
    int n;
    books_924 b[10];
    cout<<"\nEnter Total Books: ";
    cin>>n;
    for(int i=0;i<n;i++) b[i].input(i);
    disp(n,b);
    cout<<"\n"<<endl;
    return 0;
}
