// example of single inheritance
#include<iostream>
using namespace std;

class student{
    private:
    char name[25];
    int studID;
    public:
    void getdata(){
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Student ID:";
        cin>>studID;
   }
   void showdata()
   {
    cout<<"Name:"<<name<<endl;
    cout<<"Student ID:"<<studID<<endl;
   }

};
class leader: public student{ //leader inheriting all protected and public members of class:student
    private:
    char union_name[25];
    public:
    void getdata()
    {
        student::getdata();
        cout<<"Enter name of associated student union:";
       cin>>union_name;

    }
    void showdata()
    {
        student::showdata();
        cout<<"Name of associated student union:"<<union_name<<endl;
    }
};
int main()
{
    leader l;
    cout<<"Enter data on leader of student union:";
    l.getdata();
    cout<<"Show data on leader of student union:";
    l.showdata();
    return 0;
}