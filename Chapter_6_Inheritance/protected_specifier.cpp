#include<iostream>
using namespace std;

class Parent{
    // declaring protected data member
    protected:
    string id_protected;
};
class Child : public Parent{
    void setId(string id){
        id_protected = id;
    }
    void display(){
        // child accesing the protected data
        cout<<"id_protected is:"<<id_protected<<endl;

    }

};
int main()
{
    Child obj1;
    obj1.setId("LEC077BCT");
    obj1.display();
    return 0;
}
