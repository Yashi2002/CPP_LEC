#include<iostream>
using namespace std;

class animal
{
    public:
    animal()
    {
        cout<<"Constructor of animal"<<endl;
    }
    virtual void display()
    {
        cout<<"virtual display"<<endl;

    }
    ~animal() //make it virtual to call destructor of derived class
    {
        cout<<"destructor of animal class"<<endl;
    }
};
 class dog: public animal
 {
    public:
    dog()
    {
        cout<<"Constructor of dog class"<<endl;
    }
    ~dog()
    {
        cout<<"destructor of dog class"<<endl;
    }
 };
 int main()
 {
    animal *a;
    a = new dog; //dynamically memory allocated
    a->display();
    delete a; // remove dynamically allocated memory: line 36
    return 0;

 }