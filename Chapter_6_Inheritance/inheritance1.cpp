#include<iostream>
using namespace std;

class Account{             //base class
    public:
    float salary = 3000;

};
class Programmer: public Account{      //derived class
    public:
    float bonus: 2000;
};
    
    int main(void)
    {
        Programmer p1;
        cout<<"salary:"<<p1.salary<<endl;
        cout<<"bonus"<<p1.bonus<<endl;
        return 0;

    }
