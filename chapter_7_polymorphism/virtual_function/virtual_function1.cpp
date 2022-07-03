#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void move() = 0; //Pure virtual function
};

class Dog : public Animal{
    public:
    void move()
    {
        cout<<"Dog runs";
    }
};

int main()
{
    Animal *an;
    Dog d;
    an = &d;
    an->move();
    return 0;
}