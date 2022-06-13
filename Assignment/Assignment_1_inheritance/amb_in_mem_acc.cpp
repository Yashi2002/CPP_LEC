// ambiguity in member access
#include<iostream>
using namespace std;

class baseOne{
    public:
    void display(){
    cout<<"BaseOne"<<endl;
    }
};
class baseTwo{
    public:
    void display(){
    cout<<"BaseTwo"<<endl;
    }
};
class derived: public baseOne, public baseTwo{
    public:
    void drvdisplay(){
        //display(); // ambigious because which display is to be called is not known
        baseOne::display(); // baseone name is specified
        baseTwo::display(); //basetwo name is specified
         }
};
int main()
{
    derived d;
    //d.display(); //ambigious
    d.baseOne::display(); // baseone class is called
    d.baseTwo::display(); //basetwo class is called

}
