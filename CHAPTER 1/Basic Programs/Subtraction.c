/*
   Write a program to perform Subtraction of two entered numbers.
*/
#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c;
   clrscr();
   printf("Entered the numbers");
   scanf("%d%d",&a,&b);
   c=a-b;
   printf("Subtraction is=%d",c);
   getch();
}