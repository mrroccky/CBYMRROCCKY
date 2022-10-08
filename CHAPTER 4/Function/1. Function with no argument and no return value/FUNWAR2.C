/*
   Write a program to create add function and perform addition using
   function with no argument no return value.

*/


#include<stdio.h>
#include<conio.h>
void add();

main()
{
   //clrscr();
   add();
   getch();
}
void add()
{
   int a,b,c;
   printf("\nEnter the number");
   scanf("%d%d",&a,&b);
   c=a+b;
   printf("\nAddition is=%d",c);
}

