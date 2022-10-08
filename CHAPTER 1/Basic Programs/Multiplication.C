/*
    Write a program to perform multiplication of two numbers where user enter two numbers.
*/
#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c;
   //clrscr();
   printf("Entered the numbers\n");
   scanf("%d%d",&a,&b);
   c=a*b;
   printf("Multiplication is=%d",c);
   getch();
}
