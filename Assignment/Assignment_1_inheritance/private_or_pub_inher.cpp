// public or private inheritance
#include<iostream>
using namespace std;

class A{
    private:
    int pvtdataA;
    protected:
    int protdataA;
    public:
    int pubdataA;
};

class B: public A
{
    public:
    void func()
    {
        int a;
        a = pvtdataA; //No access
        a = protdataA;
        a = pubdataA;
    }
    };

    class C: protected A{
        public:
       void func()
    {
        int a;
        a = pvtdataA; //No access
        a = protdataA;
        a = pubdataA;
    }
    };
    class D: private A{
        public:
        void func()
    {
        int a;
        a = pvtdataA; // No access
        a = protdataA;
        a = pubdataA;
    }
    };
    int main()
    {
        int num;
        B objB;
        num = objB.pvtdataA; //No access
        num = objB.protdataA; //No access
        num = objB.pubdataA;

        C objC;
        num = objC.pvtdataA; //No access
        num = objC.protdataA; //No access
        num = objC.pubdataA; //No access, becuase they can access public members of thire own derived class

        D objD;
        num = objD.pvtdataA; //No access
        num = objD.protdataA; //No access
        num = objD.pubdataA; //No access

        return 0;
    }
