//Q.WAP in C++ to read the record of students name, address, and roll and display them using structure
#include <iostream>
using namespace std;
 struct student{
     char name[50];
     char address[50];
     int roll;
 }s;
 int main()
 {
     student s;
     cout<<"Enter Name of Student:";
     cin>>s.name;
     cout<<"Enter Address of Student:";
     cin>>s.address;
     cout<<"Enter roll number of Student:";
     cin>>s.roll;
     cout<<"/nDisplay Information" << endl;
     cout<<"Name"<< s.name << endl;
     cout<<"Address"<< s.address << endl;
     cout<<"Roll no"<< s.roll << endl;
     return 0;

 }