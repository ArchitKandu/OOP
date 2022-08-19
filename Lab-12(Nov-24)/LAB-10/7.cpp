#include <iostream>
#include <fstream>
using namespace std;
class student_924
{
    private:
    char name[30];
    int age;
    public:
    void getData()
    {
        cout<<"Enter name: ";
        cin.getline(name,30);
        cout<<"Enter age: ";
        cin>>age;
    }
    void showData()
    {
        cout<<"Name: "<<name<<"\nAge: "<<age<<"\n"<<endl;
    }
};
int main()
{
    student_924 s;
    ofstream file;
    file.open("7.txt",ios::out);
    if(!file)
    {
        cout<<"\nError in creating file!!!"<<endl;
        return 0;
    }
    cout<<"\nFile created successfully!!!"<<endl;
    s.getData();
    file.write((char*)&s,sizeof(s));
    file.close();
    cout<<"\nFile saved and closed succesfully!!!"<<endl;
    ifstream file1;
    file1.open("7.txt",ios::in);
    if(!file1)
    {
        cout<<"Error in opening file!!!";
        return 0;
    }
    file1.read((char*)&s,sizeof(s));
    s.showData();
    file1.close();
    return 0;
}
