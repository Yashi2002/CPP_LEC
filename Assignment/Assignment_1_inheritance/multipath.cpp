// ambigious base class member access
#include<iostream>
using namespace std;

class student
{
    private:
    int studID;
    char name;
    public:
    void getstdata()
    {
        cout<<"Enter Student ID:";
        cin>>studID;
        cout<<"Enter Student Name:";
        cin>>name;
    }
    void showstdata()
    {
        cout<<"Student ID:"<<studID<<endl;
        cout<<"Student Name:"<<name<<endl;
    }
};

class internal_exam: virtual public student
{
    protected:
    int mark1, mark2, mark3;
    public:
    void getdata()
    {
        cout<<"Enter marks in 3 subjects:";
        cin>>mark1>>mark2>>mark3;
    }
    void showdata()
    {
        cout<<"Marks in subject 1:"<<mark1<<endl;
        cout<<"Marks in subject 2:"<<mark2<<endl;
        cout<<"Marks in subject 3:"<<mark3<<endl;
    }
    int totInternalMarks()
    {
        return(mark1+mark2+mark3);
    }
};

class external_exam: virtual public student
{
    protected:
    int mark1, mark2, mark3;
    public:
     void getdata()
    {
        cout<<"Enter marks in 3 subjects:";
        cin>>mark1>>mark2>>mark3;
    }
    void showdata()
    {
        cout<<"Marks in subject 1:"<<mark1<<endl;
        cout<<"Marks in subject 2:"<<mark2<<endl;
        cout<<"Marks in subject 3:"<<mark3<<endl;
    }
    int totExternalMarks()
    {
        return(mark1+mark2+mark3);
    }
};

class result: public internal_exam, public external_exam
{
    public:
    void getdata()
    {
        internal_exam::getdata();
        external_exam::getdata();

    }
    void showdata()
    {
        internal_exam::showdata();
        external_exam::showdata();

    }
    int TotalMarks()
    {
        return(totInternalMarks()+totExternalMarks());
    }
};

int main()
{
    result r;
    cout<<"ENter data for student:"<<endl;
    r.getstdata();
    cout<<"Enter marks:"<<endl;
    r.getdata();
    cout<<"Data for the student is:"<<endl;
    r.showdata();
    cout<<"Total Marks:"<<r.TotalMarks();

}
