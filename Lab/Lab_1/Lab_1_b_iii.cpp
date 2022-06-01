// Write a program in C++ to compute area of triangle using user defined function(without arguments without return type)
#include<iostream>
#include<cmath>
using namespace std;
void area();
int main()
{
    area();
    return 0;
}
void area(void)
{ 
    int side1, side2, side3;
    cout<<"Enter three sides of triangle:";
    cin>>side1>>side2>>side3;
    float semiperimeter = (side1 + side2 + side3)/2;
    float Area = sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
    cout<<"The area of a triangle is :"<<Area<<endl;
}
