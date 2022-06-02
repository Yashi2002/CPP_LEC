#include<iostream>
using namespace std;
class HelloWorld{
    public:
    HelloWorld(){
        cout<<"Constructormis called"<<endl;

    }
    ~HelloWorld()
    {
        cout<<"Destructor is called"<<endl;

    }
};
    void display()
    {
        cout<<"Hello World"<<endl;
    }
int main()
{
    HelloWorld obj;
    display();
    return 0;
}
