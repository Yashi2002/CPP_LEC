// Array of pointers to base class object
#include<iostream>
using namespace std;

class point
{
    public:
    virtual void draw()
    {
        cout<<"point"<<endl;
    }
};
class line: public point{
    public:
    void draw()
    {
        cout<<"line"<<endl;
    }
};
class triangle: public point{
    public:
    void draw()
    {
        cout<<"triangle"<<endl;
    }
};
class polygon: public point{
     public:
    void draw()
    {
        cout<<"polygon"<<endl;
    }
};
class circle: public point{
     public:
    void draw()
    {
        cout<<"circle"<<endl;
    }
};
int main()
{
    point p;
    line l;
    triangle tr;
    polygon po;
    circle ci;
    point *ptr[] = {&p,&l,&tr,&po,&ci};  //declaration and initialization of array of base class pointer with the address of base class and derived class object
    cout<<"Figure drawn by base pointer are:"<<endl;
    for(int i =0; i<5; i++)
    ptr[i] -> draw();
}