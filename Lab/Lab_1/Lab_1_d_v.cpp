//Write a program in c++ to read the record of a student (name,address,roll) and display the record using structures in c++ using member function.
#include<iostream>
using namespace std;

class students{
    private:
        struct student
            {
                char name;
                int roll;
                char address;
            }std;

    public:
        void input(){
            cout<<"Enter the information of student: "<<endl;
            cout<<"\nName: ";
            cin>>std.name;
            cout<<"\nRoll: ";
            cin>>std.roll;
            cout<<"\nAddress: ";
            cin>>std.address;
        }

        void display(){
            cout<<"Displaying the info: "<<endl;
            cout<<"Name = "<<std.name<<endl;
            cout<<"Roll = "<<std.roll<<endl;
            cout<<"Address = "<<std.address<<endl;

        }
};

int main(){
    students s1;
    s1.input();
    s1.display();
    return 0;
}