#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char fname[1000],ch;
    fstream obj;
    cout<<"\nEnter The Name of the File: ";
    gets(fname);
    obj.open(fname,fstream::in);
    if(!obj)
    {
        cout<<"Error"<<endl;
        return 0;
    }
    cout<<"\nContent in the file '"<<fname<<"' is:"<<endl;
    while(obj.eof()==0)
    {
        obj.get(ch);
        cout<<ch;
    }
    obj.close();
    return 0;
}
