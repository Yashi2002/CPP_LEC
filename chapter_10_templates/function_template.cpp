#include<iostream>
using namespace std;

template <class T1, class T2>
void testfunc(T1 a, T2 b)
{
cout<<a<<""<<b<<endl;
}

int main()
{
    int inum = 3;
    float fnum = 3.4;
    testfunc(inum, fnum);
    testfunc(20"lets make this world a better place );
    return 0;
}