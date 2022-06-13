// overrding the function when function are in base
#include<iostream>
using namespace std;

class base{
    public:
    void display(int i)
    {
        cout<<"Base with int argument"<<endl;
    }
    void display(char c)
    {
        cout<<"Base with char argument"<<endl;
    }
};
class derived: public base{
    public:
    void display(){
        cout<<"Derived with no argument"<<endl;
    }
};
int main()
{
    derived d1;
    d1.display(); //calls derived class
    // d1.display('a');//error due to overriding
    //  d1.display(2); //error due to overriding
    d1.base::display('a');//calls base class with char argument by using scope resolution operator ::
    d1.base::display(2);//calls base class with int argument by using scope resolution operator ::
    return 0;
}