// function overriding
#include<iostream>
using namespace std;

class base
{
    protected:
    int num;
    public:
    void readdata()
    {
        cout<<"The number in base is:";
        cin>>num;
    }
    void showdata()
    {
        cout<<"The number in base is:"<<num<<endl;
    }
};
class derived: public base
{
    private:
    int num;
    public:
    void readdata()
    {
        cout<<"The number in derived is:";
        cin>>num;
    }
    void showdata()
    {
        cout<<"The number in derived is:"<<num<<endl;
    }
    
};
int main()
{
    derived d1;
    d1.readdata(); //due to overriding objects are accessing the derived class data member num only
    d1.showdata();
    system("pause");
    return 0;
    
}