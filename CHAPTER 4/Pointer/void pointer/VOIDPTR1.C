/*
    Write a program to demonstrate void pointer.
		     OR
    Write a program to demonstrate generic pointer.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a=10;
    void *p;
    //clrscr();
    p=&a;
    printf("Address of a variable using void pointer is=%u",p);
    printf("\nValue at that address is=%d",*(int*)p);
    getch();
}
