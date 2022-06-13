// example of multiple inheritance
#include<iostream>
using namespace std;

class student
{
    private:
    char name[25];
    int studID;
    public:
    void getdata()
    {
        cout<<"Enter Name of Student:";
        cin>>name;
        cout<<"Enter Student ID:";
        cin>>studID;
    }
     void showdata()
    {
        cout<<"Name of Student:"<<name<<endl;
        cout<<"Student ID:"<<studID<<endl;
    }
};

class employee
{
    private:
    char org_name[25];
    int empID;
    public:
    void getdata()
    {
        cout<<"Enter Name of Organization";
        cin>>org_name;
        cout<<"Enter employee ID:";
        cin>>empID;
    }
    void showdata()
    {
        cout<<"Name of Organization is:"<<org_name;
        cout<<"Employee ID:"<<empID;
    }
};

class marketing_officer: public student, public employee //inherts feature of class student and employee
{
    private:
    int working_hours;
    public:
    void getdata()
    {
        student::getdata();
        employee::getdata();
        cout<<"Enter working hours:";
        cin>>working_hours;
    }
     void showdata()
    {
        student::showdata();
        employee::showdata();
        cout<<"working hours:"<<working_hours;
    }
    
};

int main()
{
    marketing_officer mof;
    cout<<"Enter data of marketing officer:";
    mof.getdata();
    cout<<"Data of marketing officer:";
    mof.showdata();


}