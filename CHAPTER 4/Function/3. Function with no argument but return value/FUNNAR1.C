/*
   Write a program to create add function and perform addition using
   function with no argument but return value.

*/


#include<stdio.h>
#include<conio.h>
int add();
main()
{
   //clrscr();
   printf("Addition is=%d",add());
   getch();
}
int add()
{
   int a,b,c;
   printf("Enter the number");
   scanf("%d%d",&a,&b);
   c=a+b;
  // return c;
}

