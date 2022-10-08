/*
    Write a program to demonstrate meaning of ** pointer.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a=10;
    int *p,**q;
   // clrscr();
    p=&a;
    q=&p;
    printf("Address of a is=%u",&a);
    printf("\nAddress of p is=%u",p);
    printf("\nAddress of store in q pointer=%u",q);
    printf("\nValue of a stored in q pointer is=%d",**q);
    getch();
}
