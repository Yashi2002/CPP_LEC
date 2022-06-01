// Write a program in C++ to compute area of triangle using member function without arguments with return type.
#include<iostream>
#include<cmath>  
using namespace std;
class area
{
    private:
    int a,b,c;
    public:
    float calculatearea()
    {
        a=5;
        b=7;
        c=8;
        float s = (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
};
int main()
{
    float Area;
    area one;
    Area=one.calculatearea();
    cout<<"The area of triangle is:"<<Area<<endl;
    return 0;
}