#include<iostream>
using namespace std;

void ios_width()
{
    cout<<"---------------\n";
    cout<<"Implementing ios::width\n";
    char c = 'A';
    // adjusting width will be 5
    cout.width(5);
    cout<<c<<"\n";
    int temp = 10;
    cout.width(11);
    cout<<temp;
    cout<<"\n-------------------\n";

}

void IOS_precision()
{
    cout<<"\n-------------------\n";
    cout<<"Implementing ios::precision\n";
    cout<<"Implementing ios::width";
    // makes cout print with a fixed number of decimals
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout<<3.1422;
    cout<<"\n";
}
// fill function fills the unused
void IOS_fill()
{
    cout<<"\n---------------\n";
    cout<<"Implementing for ios::fill\n";
    char ch = 'a';
    cout.fill('*');
    cout.width(10);
    cout<<ch<<"\n";
    int i =1;
    cout<<"\n--------\n";
}
int main()
{
    ios_width();
    IOS_precision();
    IOS_fill();
    return 0;
}
