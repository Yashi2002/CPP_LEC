// WAP to calculate area and volume of a room.
#include <iostream>
using namespace std;
class room{
    public:
    int length, breadth, height;
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
    room1.length=7;
    room1.breadth=5;
    room1.height=6;
    cout<<"The area of room is:"<<room1.calculatearea()<<endl;
    cout<<"The volume of room is:"<<room1.calculatevolume()<<endl;

}