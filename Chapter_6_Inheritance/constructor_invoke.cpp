#include<iostream>
using namespace std;

class base{
    public:
    base()
    {
        cout<<"This is a base class"<<endl;
    }
    ~base()
    {
        cout<<"Destructor is called"<<endl;

    }
};
 
class derived: public base{
    public:
    derived()
    {
        cout<<"Derived";

    }
    ~derived()
    {
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    derived d1;
    return 0;
}