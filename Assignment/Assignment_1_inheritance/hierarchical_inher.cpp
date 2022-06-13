// example of hierarchical inheritance
#include<iostream>
using namespace std;

class employee{
    private:
    char name[25];
    int empID;
    float salary;
    public:
    void getdata()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Employee ID:";
        cin>>empID;
        cout<<"Enter Salary";
        cin>>salary;
    }
    void showdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Employee ID:"<<empID<<endl;
        cout<<"Salary:",salary<<endl;
 }
};

class manager: public employee{
    private:
    char highdegree[25];
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"Enter Highest Degree Obtained:";
        cin>>highdegree;
    }
    void showdata()
    {
        employee::showdata();
        cout<<"Highest degree:"<<highdegree<<endl;
 }
};

class secretary: public employee{
    private:
    float height;
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"Enter Height";
        cin>>height;
    }
    void showdata()
    {
        employee::showdata();
        cout<<"Height:"<<height<<endl;
    }
};

class teacher: public employee
{
    private: 
    int nperiods;
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"Enter number of periods:";
        cin>>nperiods;
    }
    void showdata()
    {
        employee::showdata();
        cout<<"Number of Periods:"<<nperiods<<endl;
    }
};

int main()
{
    manager m;
    secretary s;
    teacher t;
    cout<<"Enter data on Manager:";
    m.getdata();
    cout<<"Enter data on Secretary:";
    s.getdata();
    cout<<"Enter data on Teacher:";
    t.getdata();
    cout<<"Data on Manager:";
    m.showdata();
    cout<<"Data on Secretary:";
    s.showdata();
     cout<<"Data on Teacher:";
    t.showdata();
    return 0;
    
}