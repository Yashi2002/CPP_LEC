#include<iostream>
using namespace std;

template<class T>
T find_max(T a, T b)
{
    T result;
    if(a>b)
    result = a;
    else 
    result = b;
    return result;
}
int main()
    {
        int i1=15, i2 = 20;
        cout<<"Greater is"<<find_max(i1,i2)<<endl;
        float f1=15.5, f2=23.4;
        cout<<"Greater is"<<find_max(f1,f2)<<endl;
        double d1=67.5, d2=45.5;
        cout<<"Greater is"<<find_max(d1,d2)<<endl;
        char c1='a', c2='b';
        cout<<"Greater is"<<find_max(c1,c2)<<endl;
        return 0;
    }
    