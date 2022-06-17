#include<iostream>
using namespace std;
class A
{
    private:
    int a=10;
    public:
    void displayA()
    {
        cout<<"the value of a is "<<a;
    }
};
class B:public virtual A
{
    private:
    int b=10;
    public:
    void displayB()
    {
        cout<<"the value of b is "<<b;
    }
};

class C:public virtual A
{
    private:
    int c=10;
    public:
    void displayC()
    {
        cout<<"the value of c is "<<c;
    }
};
class D:public B,public C
{
    private:
    int d=10;
    public:
    void displayD()
    {
        cout<<"the value of d is "<<d;
    }
};
int main ()
{
    D obj;
    obj.displayB();
    obj.displayD();
    obj.displayC();
    obj.displayA();
}