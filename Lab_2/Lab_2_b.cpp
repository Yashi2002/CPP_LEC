// WAP to define class in C++ as shown in class diagram
#include<iostream>
using namespace std;

class Student
{
    private:
    char name[50];
    int roll;
    char address[50];
    float percentage;

    public:
    void input()
    {
        cout<<"Enter name of students:"<<endl;
        cin>>name;
        cout<<"Enter roll no. of students:"<<endl;
        cin>>roll;
        cout<<"Enter address of students:"<<endl;
        cin>>address;
        cout<<"Enter percentage of students:"<<endl;
        cin>>percentage;
    }
    void display()
    {
        cout<<"Name of Student:"<<name;
        cout<<"Roll no. of Student:"<<roll;
        cout<<"Address of Student:"<<address;
        cout<<"Percentage of Student:"<<percentage;
        if(percentage >= 45)
        {
            cout<<"Student is Pass"<<endl;
        }
        else{
            cout<<"Student is Fail"<<endl;
        }

    }
    
};
int main()
{
    int n,i; 
    Student s[n];
    cout<<"Enter number of students:";
    cin>>n;
    for(i=1; i<n; i++)
    {
        s[i].input();
    }
    for(i=1; i<n; i++){
        s[i].display();

    }
    return 0;
}