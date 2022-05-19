#include<iostream>
using namespace std;
int sum(int x, int y, int z)
{
    return x+y+z;
}
int sum(int a=1, int b=2)
{
    return a+b;
}
int main()
{
    
    cout<<"the sum is: "<< sum();
        
}