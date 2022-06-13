// multilevel inheritance example
#include<iostream>
using namespace std;

class person{
    private:
    char name[25];
    char address[25];
    public:
    void getdata()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Address:";
        cin>>address;
    }
    void showdata()
    {
        cout<<"Name:"<<name;
        cout<<"Address:"<<address;
    }
};
class employee: public person{
    private:
    int empID;
    float salary;
    public:
    void getdata()
    {
        person::getdata();
        cout<<"Enter Employee ID:";
        cin>>empID;
        cout<<"Enter Salary:";
        cin>>salary;
    }
    void showdata()
    {
        person::showdata();
        cout<<"Employee ID:"<<empID;
        cout<<"Salary:"<<salary;
    }
};
class manager: public employee{
    private:
    char highdegree;
    public:
    void getdata()
    {
        employee::getdata();
        cout<<"Enter highest degree:";
        cin>>highdegree;
    }
    void showdata()
    {
        employee::showdata();
        cout<<"Highest degree:"<<highdegree;
    }
};

int main()
{
    manager mng;
    cout<<"Enter data on manager:"<<endl;
    mng.getdata();
    cout<<"Data on Manager:"<<endl;
    mng.showdata();
}

