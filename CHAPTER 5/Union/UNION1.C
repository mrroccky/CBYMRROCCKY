/*
      Write a program to demonstrate union.
*/
#include<stdio.h>
#include<conio.h>
union Data
{
   int a;
   float b;
};
main()
{
   union Data d1;
   clrscr();
   d1.a=10;
   d1.b=20;
   printf("Value of a union memeber is=%d",d1.a);
   printf("\nValue of b union member is=%f",d1.b);
   getch();
}

