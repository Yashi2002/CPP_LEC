//Q.WAP in C++ to read the record of 5 students name, address, and roll and display them using structure
#include<iostream>
using namespace std;
struct student
{
char name[50];
char address[50];
int roll;
} s[10];

int main()
{
cout << "Enter Roll Number of the Student:" << endl;
for(int i = 0; i < 5; ++i)
{
s[i].roll = i+1;
cout << "Roll Number" << s[i].roll << endl;
cout << "Enter Name of Students";
cin >> s[i].name;
cout << "Enter Address of Students";
cin >> s[i].address;
}
cout << "Displaying Information" << endl;
for(int i = 0; i < 5; ++i)
{
cout << "\nRoll number of Student" << i+1 << endl;
cout << "Name of Student" << s[i].name << endl;
cout << "Address of Student" << s[i].address << endl;
}
return 0;
}