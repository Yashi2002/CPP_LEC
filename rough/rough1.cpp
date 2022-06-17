#include <iostream>
using namespace std;
class A 
{   
    public :
    int a = 10;
    int b = 10;
    void display()
    {   
        
        cout<<"This is class";
    }

};
int main ()
{
    A a1,a2,a3;
    a3= a1 + a2;
    cout<<"The value of a3.a is "<<a3.a;
    
}