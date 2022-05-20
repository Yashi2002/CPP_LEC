#include <iostream>
using namespace std;
double sum(int a, double b)
{
    return a+b;
}
int sum(int x, int y)
{
    return x+y;
}
int main()
{
    cout<<"The sum is:"<<sum(1,2.8);
}
