/*
   Write a program to create add and sub function and perform addition and
   subtraction using function with no argument no return value.

*/


#include<stdio.h>
#include<conio.h>
void add();
void sub();
main()
{
   clrscr();
   add();
   sub();
   getch();
}
void add()
{
   int a,b,c;
   printf("\nEnter the number\n");
   scanf("%d%d",&a,&b);
   c=a+b;
   printf("\nAddition is=%d",c);
}
void sub()
{
   int a,b,c;
   printf("\nEnter the number\n");
   scanf("%d%d",&a,&b);
   c=a-b;
   printf("\nSubtraction is=%d",c);
}



