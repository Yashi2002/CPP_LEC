#include <iostream>
using namespace std;
 void display(int a)
 {
     cout<<"Output is:"<< a<< endl;

 }
 void display(int b, int c)
 {
     cout<<"Output is:"<< b <<" " <<c;

 }
 int main()
 {
     display(10,12);
     return 0;
 }