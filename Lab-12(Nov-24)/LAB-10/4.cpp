#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    string str,line;
    file.open("4.txt", ios::in);
    while(getline(file, str))
    {
        line=line+str;
        line=line+"\n";
    }
    file.close();
    cout<<"\nLine written on file before reversing: ";
    cout<<line<<endl;
    reverse(line.begin(),line.end());
    file.open("4.txt",ios::in | ios::out | ios::trunc);
    file<<line<<endl;
    cout<<"Line written on file after reversing: ";
    cout<<line<<endl;
    file.close();
    return 0;
}
