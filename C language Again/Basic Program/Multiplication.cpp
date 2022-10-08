/*
    Write a program to perform multiplication of two numbers where user enter two number.
*/
#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c;
   clrscr();
   printf("Enter the number");
   scanf("%d%d",&a,&b);
   c=a*b;
   printf("Multiplication is=%d",c);
   getch();
}
