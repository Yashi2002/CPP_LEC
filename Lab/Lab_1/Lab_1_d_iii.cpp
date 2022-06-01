//Write a program in C++ to compute area of triangle using member function without arguments without return type.
#include<iostream>
#include<cmath>  
using namespace std;
class area
{
    private:
    int a,b,c;
    public:
    void calculatearea()
    {
        a=5;
        b=7;
        c=8;
        float s = (a+b+c)/2;
        float Area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"The area of triangle is:"<<Area<<endl;
        
    }
};
int main()
{
    area one;
    one.calculatearea();
    
    return 0;
}