// WAP to calculate area and volume of a room.
#include <iostream>
using namespace std;
class room{
    private:
    int length, breadth, height;
    public:
    void setvalue(int a, int b, int c)
    {
        length = a;
        breadth = b;
        height = c;
    }
    int calculatearea()
    {
        return length * breadth;
    }
    int calculatevolume()
    {
        return length * breadth * height;
    }
};
int main()
{
    room room1;
    room1.setvalue(7, 5, 6);
    cout<<"The area of room is:"<<room1.calculatearea()<<endl;
    cout<<"The volume of room is:"<<room1.calculatevolume()<<endl;
}