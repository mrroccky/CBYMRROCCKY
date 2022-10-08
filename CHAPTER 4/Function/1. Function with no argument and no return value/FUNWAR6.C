/*
   Write a program to print "I like C language" Message" using for loop n times function.

*/


#include<stdio.h>
#include<conio.h>
void msg();
main()
{
   int i,n;
   clrscr();
   printf("Enter the number for how many times you want to print number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      msg();
   }
   getch();
}
void msg()
{
   printf("\nI like C language");
}
