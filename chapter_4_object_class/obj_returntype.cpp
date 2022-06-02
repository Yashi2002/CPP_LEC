// object returntype
#include<iostream>
using namespace std;
class student
{
    public:
    double mark1, mark2;

};
student createstudent()
{
    student student;
    student.mark1 = 100;
    student.mark2 = 200;
    cout<<"The marks are:"<<student.mark1<<"\t"<<student.mark2<<endl;
    return student;

};
int main()
{
    student student1;
    student1 = createstudent();
    return 0;
}

