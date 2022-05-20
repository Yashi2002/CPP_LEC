#include <iostream>
using namespace std;
void normal(int a)
{
    a=10;
    cout<<"The value of a is:"<< a << endl;
}
void refer(int &b)
{
    b=20;
    cout<<"The value of b is:"<< b << endl;
}
int main()
{
    int a=25;
    int b=35;
    normal(a);
    refer(b);
    cout<<"The value of a in main is:"<< a;
    cout<<"The value of b in main is:"<< b;
}