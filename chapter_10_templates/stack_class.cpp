#include<iostream>
using namespace std;

const int MAX= 20;
template<class t>

class stack
{
    private:
    t arr[MAX];
    int top;
    public:
    stack()
    {
        top = -1;

    }
    void push(t data)
    {
        arr[++top]=data;
    }
    pop()
    {
        return arr[top--];
    }
    int size()
    {
        return (top+1);
    }
};
int main()
{
    cout<<"Stack for integer data type:"<<endl;
    stack<int> s1;
    cout<<"Size of stack"<<s1.size()<<endl;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    cout<<"Size of stack after push:"<<s1.size()<<endl;
    cout<<"Number popped is:"<<s1.pop()<<endl;
    cout<<"Number popped is:"<<s1.pop()<<endl;
    cout<<"Size of stack"<<s1.size()<<endl;
    s1.push(55);
    cout<<"Size of stack"<<s1.size()<<endl;
    cout<<"Number popped is:"<<s1.pop()<<endl;
    cout<<"Size of stack"<<s1.size()<<endl;

}