// Write a program in C++ to compute area of triangle using member function with arguments no return type.
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
        float Area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"The area of triangle is:"<<Area<<endl;
        return 0;
    }
};
int main()
{
    float Area;
    area one;
    one.calculatearea(5,7,8);
    
    return 0;
}