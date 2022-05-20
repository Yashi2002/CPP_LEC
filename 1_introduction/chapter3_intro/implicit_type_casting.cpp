// Implicit type conversion - The type of conversion that is done automatically done by the compiler.
#include <iostream>
using namespace std;
int main()
{
    int num_int = 9;
    double num_double;
    char char_test;
    num_double = num_int;
    char_test = num_int;
    cout<<"num_int=" << num_int << endl;
    cout<<"num_double="<< num_double << endl;
    cout<<"char_test="<< char_test << endl;
    return 0;
}