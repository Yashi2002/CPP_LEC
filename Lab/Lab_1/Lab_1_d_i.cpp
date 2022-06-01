// Write a program in C++ to compute area of triangle using member function with arguments and return type
#include<iostream>
#include<cmath>  
using namespace std;
class area
{
    private:
    int a,b,c;
    public:
    float calculatearea(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
        float s = (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
};
int main()
{
    float Area;
    area one;
    Area=one.calculatearea(5,7,8);
    cout<<"The area of triangle is:"<<Area<<endl;
    return 0;
}
