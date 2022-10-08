/*
    Write a program to demonstrate pointer.
		    OR
    Write a program to display address and value at that address.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a=10;
    int* p;
    //clrscr();
    p=&a;
    printf("Address of a is=%u",p);
    printf("\nValue at that address is=%d",*p);
    getch();
}
