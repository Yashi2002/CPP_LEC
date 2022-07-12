// unary operator overloading with non member function

#include<iostream>
using namespace std;

class unary{
    private:
        int a,b,c;
    public:
        unary(int x, int y, int z){
            a=x;
            b=y;
            c=z;
        }

        void display(){
            cout<<"value of a: "<<a<<endl;
            cout<<"Value of b: "<<b<<endl;
            cout<<"value of c: "<<c<<endl;
        }

        friend void operator - (unary &n);
};

void operator - (unary &num)
    {
            num.a = -num.a;
            num.b = -num.b;
            num.c = -num.c;
        }


int main(){
    unary un(5,4,6);
    un.display();
    -un;
    un.display();
    return 0;
}