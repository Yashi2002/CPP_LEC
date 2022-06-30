#include<stdio.h>

int main()
{
    int* pc, c;
    c = 5;
    pc = &c; //pc le address linxa
    *pc = &c; //false because *pc gives value
    pc= c; //false because pc gives address of c
    *pc = c;//address linxa
    printf("Address of c is:%d",pc);
    printf("The value of c is:%d",c);
    printf("The value of c is:%d",*pc);
    return 0;

}