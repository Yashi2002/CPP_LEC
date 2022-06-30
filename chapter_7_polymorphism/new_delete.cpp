#include<iostream>
using namespace std;

int main()
{
    //declaring pointer variable
    int* pointInt;
    float* pointFloat;
    //dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;
    cout<<"address assigned to printInt is:"<<pointInt<<endl;
    cout<<"address assigned to printFloat is:"<<pointFloat<<endl;

    *pointInt = 45;
    *pointFloat = 45.5;
    cout<<"value assigned to printInt is:"<<*pointInt<<endl;
    cout<<"value assigned to printFloat is:"<<*pointFloat<<endl;
    delete pointInt;
    delete pointFloat;
    return 0;

}