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
        // 1st method for overriding access
        // base::print();
    }
    
};
int main()
{
    derived d1, d2;
    d1.print();
    // 2nd method
    d2.base::print();
    return 0;
}