/*
    Write a program to perform assignment of variable using pointer.
			   OR
    Write a program to demonstrate pointer assignment.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a=10;
    int* p;
    //clrscr();
    p=&a;
    *p=20;
    printf("\nValue of a variable using pointer assignment is=%d",*p);
    getch();
}
