#include<iostream>
using namespace std;

class Array{
    private:
    int arr[10];
    public: 
    class lowrange{};
    class highrange{};
    int &operator [] (int(i))
    {
        if(i<0)
        throw lowrange();
        if(i>10)
        throw highrange();
        return arr[i];
    }
};
int main()
{
    Array a;
    int index;
    try{
        cout<<"Enter array index:";
        cin>>index;
        a[index];
        cout<<"Index"<<index<<"is within the range"<<endl;

    }
    catch(...){
        cout<<"Exception out of range";
    }
}