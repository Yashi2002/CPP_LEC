// Write a program in C++ to compute area of triangle using user defined function(without arguments withreturn type)
#include<iostream>
#include<cmath>
using namespace std;
float area();
int main()
{ 
    float Area;
    Area=area();
    cout<<"The area of a triangle is :"<<Area<<endl;
    return 0;
}
float area()
{ 
    int side1, side2, side3;
    cout<<"Enter three sides of triangle:";
    cin>>side1>>side2>>side3;
    float semiperimeter = (side1 + side2 + side3)/2;
    float area = sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
    
    return area;
}
