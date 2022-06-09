#include<iostream>
using namespace std;
class Test
{
    private:
    int x;
    public:
    void setX(int x){
        this->x=x;
    }
    void print(){
        cout<<"Value of x is: "<<x<<endl;
        cout<<"address of object that is calling x is: "<<this<<endl;
    }

};
int main()
{
    Test obj1, obj2;
    obj1.setX(20);
    obj1.print();
    obj2.setX(100);
    obj2.print();
    return 0;

}