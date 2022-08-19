#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    char path[100];
    char ch;
    string s="";
    file.open("6.txt", ios::in);
    if(!file)
    {
        cout<<"\nUnable to open file!!!"<<endl;
        return 0;
    }
    while(file.eof()==0)
    {
        file.get(ch);
        if(ch>='a' && ch<='z')
        ch=ch-32;
        else if(ch>='A' && ch<='Z')
        ch=ch+32;
        s=s+ch;
    }
    file.close();
    file.open("6.txt", ios::in | ios::out | ios::trunc);
    file<<s;
    cout<<"\n....Changed..."<<endl;
    file.close();
    return 0;
}
