#include<iostream>
using namespace std;
// after overloading an operator it can be applied to an object in the same way as it is applied to basic types
class Count 
{
    private:
    int value;
    public:
    Count()
    {
        value = 5;
    }
   void operator++()
   {
    value = value + 1;
   }
   void operator++(int)
   {
    value = value + 1;
   }
   void display ()
   {
    cout<<"the value is "<<value<<endl;
   }
};
int main()
{
    Count a;
    a.display();
    a++;
    ++a;
   
    a.display();

}