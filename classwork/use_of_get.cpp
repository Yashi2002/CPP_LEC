#include<iostream>
using namespace std;

const int MAX=50;
char str1[MAX];
char str2[MAX];
int main()
{
    cout<<"Enter a string terminated by new line:"<<endl; //read string until new line or max character is reached
cin.get(str1, MAX);
cout<<"Enter multiline stringterminatd by $"<<endl;
cin.get(str2, MAX, '$'); //reads multiline string including newline and read string until max char is reached
cout<<"String 1:"<<str1<<endl;
cout<<"String 2:"<<str2<<endl;
return 0;
}

