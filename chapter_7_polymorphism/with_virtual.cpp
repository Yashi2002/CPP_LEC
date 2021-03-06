//When a function is made virtual it allows the program to decide at run time which function to call based on the TYPE OF THE OBJECT POINTED BY THE POINTER rather than TYPE OF THE POINTER ITSELF.
#include<iostream>
using namespace std;

class shape
{
    protected:
    int width, height;
    public:
    shape(int a=0, int b=0) //default values of a and b
    {
        width=a;
        height=b;
    }
    int virtual area()
    {
        cout<<"THe area of shape is:"<<endl;
    }
};

class rectangle: public shape{
    public:
    rectangle(int a, int b)
    {
       width=a;
       height=b;
    }
    int virtual area()
    {
        cout<<"Area of rectangle is:"<<height*width<<endl;
    }
    };

    class triangle: public shape{
        public:
        triangle(int a, int b)
        {
            width=a;
            height=b;
        }
        int virtual area()
    {
        cout<<"Area of triangle is:"<<(height*width)/2<<endl;
    }
    };
    int main()
    {
        shape *Shape;
        shape sh(2,3);
        rectangle re(3,4);
        triangle tr(4,5);
        Shape = &re;
        Shape -> area();
        Shape = &tr;
        Shape -> area();
        return 0;

    }
    