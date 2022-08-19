#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    string s;
    file.open("3.txt", ios::out);
    if(!file)
    {
        cout<<"\nError in creating file!!!"<<endl;
        return 0;
    }
    cout<<"\nFile created successfully!!!"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<"Enter Sentence "<<i<<": ";
        cin>>s;
        file<<s<<endl;
    }
    file.close();
    file.open("3.txt",ios::in);
    if(!file)
    {
        cout<<"Error in opening file!!!"<<endl;
        return 0;
    }
    char ch;
    cout<<"File content: "<<endl;
    while(file.eof()==0)
    {
        file.get(ch);
        cout<<ch;
    }
    file.close();
    return 0;
}
