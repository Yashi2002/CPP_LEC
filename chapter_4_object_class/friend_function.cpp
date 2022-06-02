#include<iostream>
using namespace std;
class class1{
    friend class class2;
    private:
    double mark;
    public:
    class1(int a)
    {
        mark = a;
    }
    
};
class class2
{
    public:
    class2(class1 obj)
    {
        cout<<"The marks is:"<<obj.mark;

    }
};
int main()
{
    class1 obj1(5);
    class2 obj2(obj1);
 return 0;
 }