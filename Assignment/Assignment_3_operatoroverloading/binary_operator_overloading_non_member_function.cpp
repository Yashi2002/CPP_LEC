//binary operator overloading with non member function

#include <iostream>
using namespace std;

class sum
{
private:
    int num_1, num_2;

public:
    sum(int a = 0, int b = 0)
    {
        num_1 = a;
        num_2 = b;
    }

    void display()
    {
        cout << "sum of 1st number is:" << num_1 << endl;
        cout << "sum of 2nd number is:" << num_2 << endl;
    }

    friend sum operator+(sum s1, sum s2);
};

sum operator+(sum s1, sum s2)
{
    sum s3;
    s3.num_1 = s1.num_1 + s2.num_1;
    s3.num_2 = s1.num_2 + s2.num_2;
    return s3;
}

int main()
{
    sum s1(3,4);
    sum s2(1,2);
    sum s3 = s1 + s2;
    s3.display();
}