#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    float mark;
    class roll_err{};
    class mark_err{};
    student()
    {
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Roll:";
    cin>>roll;
    cout<<"Enter Marks:";
    cin>>mark;
    
        if(roll<0)
        throw roll_err();
        if(mark>100)
        throw mark_err();
    }
    void showdata()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<roll<<endl;
        cout<<"Marks:"<<mark<<endl;
    }
};
int  main()
{
    try{
        student();
    }
    catch(student :: roll_err)
    {
        cout<<"Exception caught for roll";
    }
    catch(student :: mark_err)
    {
        cout<<"Exception caught for marks";
    }
   return 0;
   }


