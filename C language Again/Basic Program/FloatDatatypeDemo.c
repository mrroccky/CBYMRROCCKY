/*
    Write a program to demonstrate float data type.
*/
#include<stdio.h>
#include<conio.h>
main()
{
	float a=10.23;
	float b=10.23f;
	float c=10.23F;
	float d=10.23e4;
	float e=10.23E2;
    //clrscr();
    printf("Value of a variable=%f",a);
    printf("\nValue of b variable=%f",b);
    printf("\nValue of c variable=%f",c);
    printf("\nValue of c variable=%e",c);
    printf("\nValue of d variable=%f",d);
    printf("\nValue of e variable=%g",e);
    getch();
}
