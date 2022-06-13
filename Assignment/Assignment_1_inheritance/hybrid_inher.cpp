// example of hybrid inheritance
#include<iostream>
using namespace std;
class person{
    private:
    char name[25];
    int age;
    public:
    void getdata{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    }
    void showdata{
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};

class exam{
    protected:
    int mark1, mark2, mark3;
    public:
    void getdata{
        cout<<"Enter marks in 3 subjects:";
        cin>>mark1>>mark2>>mark3;
    }
    void showdata{
        cout<<"Marks in 3 subjects:"<<mark1<<mark2<<mark3<<endl
    }
};

class student: public person{
    private:
    int studID;
    char stream[25];
    public:
    void getdata()
    {
        person::getdata();
    cout<<"Enter Student ID:";
    cin>>studID;
    cout<<"ENter Stream:";
    cin>>stream;
    }
    void showdata{
        person::showdata;
        cout<<"Student ID:"<<studID<<endl;
        cout<<"Stream:"<<stream<<endl;
    }
};

class result: public student, public exam{
    private:
    int total;
    public:
    void getdata()
    {
        student::getvalue();
        exam::getvalue();
    }
    void showdata()
    {
        student::showdata();
        exam::showdata();
        cout<<"TOtal Marks:"<<total<<endl;
        cout<<"Percentage:"<<static_cast<float>(total)/3;

    }
};
int main()
{
    result r;
    cout<<"Enter data for result processing:",<endl;
    r.getdata();
    cout<<"Data on student:"<<endl;
    r.showdata();
    return 0;
}