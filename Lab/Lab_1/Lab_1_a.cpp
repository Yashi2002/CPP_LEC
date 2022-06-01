// Write a program in C++ to compute area of trianagle.
#include<iostream>
#include<cmath> //For using sqrt 
using namespace std;
int main()
{
    int side1, side2, side3;
    cout<<"Enter three sides of triangle:";
    cin>>side1>>side2>>side3;
    float semiperimeter = (side1 + side2 + side3)/2;
    float area = sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
    cout<<"The area of a triangle is :"<<area<<endl;
    return 0;
}