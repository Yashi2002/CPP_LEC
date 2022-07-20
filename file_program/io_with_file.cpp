#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[100];
    // open file in write mode
    ofstream outfile;
    outfile.open("createfile.txt");
    cout<<"Writing to the file"<<endl;
    cout<<"Enter your name:";
    cin.getline(data,100);
    // write inputted data to the file
    outfile<<data<<endl;
    
    cout<<"Enter your age";
    cin>>data;
    // ignore or clear one or more characters from input
    cin.ignore();
    // againwrite inputted data to the file
    outfile<<data<<endl;
    // close the opened file
    outfile.close();
}