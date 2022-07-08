#include<iostream>
using namespace std;

template<class T, int size>
class array
{
    private:
    T arr[size];
    public:
    void get_array();
    T findmax();
    T findmin();
};
template<class T, int size>
void array<T, size> :: get_array()
{
    
    for(int i=0; i<size; i++)
    cin>arr[i];
     }

template<class T, int size>
T array<T, size> :: findmax()
{
    
    T max = arr[0]
    for(int i=1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
template<class T, int size>
T array<T, size> :: findmin()
{
    
    T min = arr[0]
    for(int i=1; i<size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    array<int, 5> a1;
    cout<<"Enter array elements:"<<endl;
    a1.get_array();
    cout<<"Maximum number is:"<<a1.findmax()<<endl;
    cout<<"Minimum number is:"<<a1.findmin()<<endl;
    return 0;
}
