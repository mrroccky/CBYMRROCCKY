/*
   Write a program to create add function and perform addition using
   function with no argument but return value.

*/


#include<stdio.h>
#include<conio.h>
add();
main()
{
   int c;
   clrscr();
   c=add();
   printf("Addition is=%d",c);
   getch();
}
add()
{
   int a,b,c;
   printf("Enter the number");
   scanf("%d%d",&a,&b);
   c=a+b;
}

