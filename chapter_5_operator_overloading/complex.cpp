#include<iostream>
using namespace std;

class complex 
{
    private:
    int real, img;
    public:
    complex()
    {
        real = 0;
        img = 0;
    }
    void input()
    {
        cout<<"The complex number is:";
        cin>>real>>img;
    }

complex operator +(complex &obj)
{
    complex temp;
    cout<<"The complex number is"<<real<<img;
    temp.real = real+obj.real;
    temp.img = img + obj.img;
    return temp;
}
void display()
{
    cout<<"The sum of complex number is:"<<real<<"+i"<<img;
}
};
int main()
{
    complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1+c2;
    c3.display();
    return 0;

}
