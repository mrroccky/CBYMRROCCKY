/*
   Write a program to perform addition function with argument
   but no return value.
*/
#include<stdio.h>
#include<conio.h>
void add(int,int);
main()
{
   int a,b;
   //clrscr();
   printf("Enter the numbers");
   scanf("%d%d",&a,&b);
   add(a,b);
   getch();
}
void add(int a,int b)
{
   int c;
   c=a+b;
   printf("Addition is=%d",c);
}
