// Write a program in C++ to compute area of triangle using user defined function(with arguments no return type)
#include<iostream>
#include<cmath>
using namespace std;
float area(int, int, int);
int main()
{
    int side1, side2, side3;
    cout<<"Enter three sides of triangle:";
    cin>>side1>>side2>>side3;
    area(side1, side2, side3);
    return 0;
}
float area(int a, int b, int c)
{ 
    float semiperimeter = (a + b + c)/2;
    float Area = sqrt(semiperimeter*(semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c));
    cout<<"The area of a triangle is :"<<area(a,b,c)<<endl;
    return 0;
}
