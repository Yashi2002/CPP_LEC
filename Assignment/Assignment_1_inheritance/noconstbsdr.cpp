// no constructor in baase and derived class
#include<iostream>
using namespace std;
class base
{
  //body of base class
//   no constructor
};
class derived: public base{
    // body of derived class
    // no constructor
    public: void message()
    {
        cout<<"No constructor and base on derived class";
    }
};
int main()
{
    derived d;
    d.message();
    return 0;
}