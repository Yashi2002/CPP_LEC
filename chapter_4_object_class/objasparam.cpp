// Object as parameter
#include<iostream>
using namespace std;
class student{
    public:
    double mark;
    student(double m)
    {
        mark = m;
    }
};
void calculateaverage(student s1, student s2)
{
    double average = (s1.mark + s2.mark)/2;
    cout<<"The average marks of student is:"<<average<<endl;
}
int main()
{
    student student1(100), student2(200);
    calculateaverage(student1, student2);
}