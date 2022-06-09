// WAP to create a class Sample with 2 float data members and member functions void getdata() to input the values and one float mean(Sample) to calculate and return mean value.
#include<iostream>
using namespace std;

class Sample
{
    friend float mean(Sample);
    private:
    float value1, value2, Mean;
    public:
    void getdata()
    {
        cout<<"Enter value 1:";
        cin>>value1;
        cout<<"Enter value 2:";
        cin>>value2;
    }
    float mean(Sample obj){
        return float(obj.value1+obj.value2)/2;
    }


};
int main()
{
    Sample object;
    object.getdata();
    cout<<"The Mean is:"<<mean(object);
    return 0;

}


