/*
      Write a program to demonstrate union.
*/
#include<stdio.h>
#include<conio.h>
union Data
{
   int a;
   float b;
   char c;
};
main()
{
   union Data d1;
   clrscr();
   printf("Size of Data Union is=%d",sizeof(d1));
   getch();
}