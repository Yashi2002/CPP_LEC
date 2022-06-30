// accessing members of objects
#include<iostream>
using namespace std;

class test
{
    public:
    int data;
    test()
    {
        cout<<"Constructor is called:"<<endl;
        data=5;
    }
    ~test()
    {
        cout<<"Destructor is called:"<<endl;

    }
    void showdata()
    {
        cout<<"The data is:"<<data<<endl;
    }

};

int main()
{
    test *ptr;
    test obj; // invoking constructor
    ptr = &obj; //store the address of object obj
    cout<<"Accessing object:"<<endl; //access the object through obj.show
    obj.showdata();
    cout<<"Accessing object:"<<endl; //access the object through ptr->showdata()
    ptr-> showdata();
    return 0;
}
