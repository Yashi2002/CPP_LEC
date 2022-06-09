// WAP to define a class Time that has 3 data members for hours, minutes and second. Include member functions.
#include<iostream>
using namespace std;
 
 class Time
 {
     private:
     int hr, min, sec, Sum;

     public:
    void gettime()
    {
        cout<<"Enter Time:";
        cout<<"Enter hour:";
        cin>>hr;
        cout<<"ENter minute:";
        cin>>min;
        cout<<"Enter second:";
        cin>>sec;
    }
    void display()
    {
        cout<<"The sum of time is:"<<hr<<"hr"<<min<<"min"<<sec<<"sec";
       
    }
    void sum(Time one, Time two){
        hr = one.hr + two.hr;
        min = one.min + two.hr;
        sec = one.sec + two.sec; 
        
    }

 };
 int main()
 {
     Time t1, t2, add;
     t1.gettime();
     t2.gettime();
     add.sum(t1,t2);
     add.display();

     return 0;
 }