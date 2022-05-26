 #include <iostream>
 using namespace std;
 class construct
 {
     public:
     int a, b;
     construct() {
         cout<<"\nConstructor is called:";
         a=10;
         b=20;
         
         }
         void display()
         {
             cout<<"\nYasmini Gyawali";
         }
     

 };
 int main()
 {
     construct c;
     c.display();
 }