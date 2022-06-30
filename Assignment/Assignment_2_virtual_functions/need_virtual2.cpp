// need of virtual function
#include<iostream>
using namespace std;

class animal
{
    public:
    virtual void display() //use of virtual function to postpone calling of function until runtime
    {
        cout<<"From base class animal"<<endl;
    }
};
class dog: public animal{
    public:
    virtual void display()
    {
        cout<<"From derived class dog"<<endl;
    }
};
class cow: public animal{
    public:
    virtual void display()
    {
        cout<<"From derived class cow"<<endl;
    }
};
int main()
{
    animal *ptan; //pointer to base class
    animal an;
    cow co;
    dog doo;
    ptan = &an;
    ptan -> display();
    ptan = &co;
    ptan -> display();
    ptan = &doo;
    ptan -> display();
    return 0;
}