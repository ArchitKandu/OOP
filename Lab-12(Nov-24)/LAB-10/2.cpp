#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
    ifstream ini_file{"2_1.txt"};
    ofstream out_file{"2_2.txt"};
    if(ini_file && out_file)
    {
        while(getline(ini_file,line))
        out_file<<line<<"\n";
        cout<<"\nCopy Finished\n"<<endl;
    }
    else
        cout<<"\nCannot read File\n"<<endl;
    ini_file.close();
    out_file.close();
    return 0;
}
