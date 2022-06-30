// Need of virtual function
#include<iostream>
using namespace std;

class animal
{
    public:
    void display()
    {
        cout<<"From base class animal"<<endl;
    }
};
class dog: public animal{
    public:
    void display()
    {
        cout<<"From derived class dog"<<endl;
    }
};
class cow: public animal{
    public:
    void display()
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
} //The compiler is unknown about the address which is known at the run time and chooses the member function that matches the type of function so only: base class animal is printed
// hence we need virtual function whose example is shown after this