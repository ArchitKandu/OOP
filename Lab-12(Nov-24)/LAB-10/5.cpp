#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    char path[100];
    char ch;
    int characters, words, lines, ucase, lcase, digits, sp;
    file.open("5.txt",ios::in);
    if(!file)
    {
        cout<<"\nUnable to open file!!!"<<endl;
        return 0;
    }
    characters=words=lines=ucase=lcase=digits=sp=0;
    while (file.eof()==0)
    {
        file.get(ch);
        characters++;
        if(ch>='a' && ch<='z')
            lcase++;
        else if(ch>='A' && ch<='Z')
            ucase++;
        else if(ch>='0' && ch<='9')
            digits++;
        else if(ch=='\n' || ch=='\0')
            lines++;
        else if(ch==' ' || ch=='\t' || ch=='\n' || ch=='\0')
            words++;
        else
            sp++;
    }
    if(characters>0)
    {
        words++;
        lines++;
    }
    cout<<"\nTotal characters: "<<characters<<endl;
    cout<<"Total Lowercase Characters: "<<lcase<<endl;
    cout<<"Total Uppercase Characters: "<<ucase<<endl;
    cout<<"Total Digits: "<<digits<<endl;
    cout<<"Total words: "<<words<<endl;
    cout<<"Total lines: "<<lines<<endl;
    cout<<"Total Special Characters: "<<sp<<"\n"<<endl;
    file.close();
    return 0;
}
