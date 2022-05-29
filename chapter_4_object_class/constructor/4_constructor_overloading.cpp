#include<iostream>
using namespace std;

class hall{

private :
int person , capacity ;

public :
hall(int personnn)
{
    person=personnn ;
    cout <<"The number of people is "<< personnn <<endl;

}
hall(int pep,int cap)
{
    person=pep;
    capacity=cap;
    cout <<"The total capacity remaining is :  "<< capacity - person <<endl;
}
};
int main()
{
    hall h1(100) ;
    hall h2(430,550);

}