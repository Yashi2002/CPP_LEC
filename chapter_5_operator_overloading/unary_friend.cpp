#include<iostream>
using namespace std;
class Unary 
{
    private:
    int a = 10;
    int b = 20;
    int c = 30;
    public :
    void showdata()
    {
        cout<<a<<b<<c<<endl;
    }
    void friend operator-(Unary& u1);
   
};
void operator-(Unary& u1)
{
  u1.a = -u1.a;
  u1.b = -u1.b;
  u1.c = -u1.c;
  
}
int main ()
{
    Unary a;
    a.showdata();
    -a;
    a.showdata();
}