//Write a program in c++ to read the record of a student (name,address,roll) and display the record using structures in c++.
#include<iostream>
using namespace std;
struct student
{
    char name[50];
    char address[50];
    int roll;
};
int main()
{
    student std;
    cout<<"Enter name of student:";
    cin>>std.name;
    cout<<"Enter address of student:";
    cin>>std.address;
    cout<<"Enter roll of student:";
    cin>>std.roll;
    cout<<"Display Information"<<endl;
    cout<<"Name of Student:"<<std.name<<endl;
    cout<<"Address of Student:"<<std.address<<endl;
    cout<<"Roll no. of Student:"<<std.roll<<endl;

}