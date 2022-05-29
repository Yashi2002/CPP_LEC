#include<iostream>
using namespace std;

class wall{
private :
int length,height ;

public :
// parameterized constructor
wall(double len ,double high)
{
// initialize private variable
length=len;
height=high;
}
// copy constructor with a wall object as parameter 
// syntax to create copy constructor - classname(classname &objectname)
wall (wall &obj){
  // initialize private variable 
  length =obj.length;
  height=obj.height;
}
double calculatearea()
{
    return length*height ;
}


};
int main ()
{
  // creating an oblect of wall
  wall w1(5.5,10.5);

  cout <<"Area of wall 1 : "<< w1.calculatearea()<<endl ;
  wall w2 = w1 ;
  // print area of wall 2
  // here wall 1 is object of wall whose value is being uploded to another object 
  cout <<"THE area of 2nd wall is  : "<< w2.calculatearea()<<endl;
  return 0;
}
