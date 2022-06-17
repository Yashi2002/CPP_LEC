#include <iostream>
using namespace std;
class Binary 
{
    private:
    int a,b ;
    public :
    Binary()
    {
     a=0;
     b=0;
    }
    Binary(int c,int d)
    {
        a=c;
        b=d;
    }
    Binary operator +(Binary obj)
    {
        Binary obj2;
        cout<<"The value of obj2 a inside overloading function is "<<obj2.a<<endl;
        cout<<"The value of obj2 b inside overloading function is "<<obj2.b<<endl;

        cout<<"The value of obj b inside overloading function is "<<obj.a<<endl;
        cout<<"The value of obj b inside overloading function is "<<obj.b<<endl;
    //    calling object is passed implicitly and second object is passed through argument 
        obj2.a=a+obj.a;
        obj2.b=b+obj.b;
        return obj2;

    }
    void display()
    {   
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main()
{
    Binary b1,b2,b3;
    b1 = Binary(10,20); 
    b2 = Binary(30,40); 
    b3 = b1 + b2;
    b1.display();
    b2.display();
    b3.display();

} 