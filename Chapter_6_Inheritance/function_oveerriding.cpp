#include<iostream>
using namespace std;

class base{
    public:
    void print()
    {
        cout<<"Base"<<endl;

    }
};
class derived : public base{
    public:
    void print()
    {
        cout<<"Derived"<<endl;
    }
};
int main()
{
    derived d1;
    d1.print();
    return 0;
}