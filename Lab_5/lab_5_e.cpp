// shapes
#include<iostream>
using namespace std;

class shape
{
    protected:
    int width, height;
    public:
    void getdata()
    {
        cout<<"Enter width:"<<endl;
        cin>>width;
        cout<<"Enter height:"<<endl;
        cin>>height;
    }
    void virtual display_area()=0;
};
class triangle: public shape
{
    public:
    void getdata()
    {
        
        cout<<"Enter height and width of triangle"<<endl;
        shape::getdata();
    }
    void display_area()
    {

        cout<<"Area of triangle is :"<<0.5*height*width<<endl;
    }
};
class rectangle: public shape
{
    public:
    void getdata()
    {
       
        cout<<"Enter height and width of rectangle"<<endl;
         shape::getdata();
    }
    void display_area()
    {

        cout<<"Area of rectangle is :"<<height*width<<endl;
    }
};
int main()
{
    triangle t;
    rectangle r;
    t.getdata();
    t.display_area();
    r.getdata();
    r.display_area();

}
