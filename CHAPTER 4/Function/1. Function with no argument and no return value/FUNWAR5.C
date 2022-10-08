/*
   Write a program to print "I like C language" Message" using for loop 5 times function.

*/


#include<stdio.h>
#include<conio.h>
void msg();
main()
{
   int i;
   //clrscr();
   for(i=1;i<=5;i++)
   {
      msg();
   }
   getch();
}
void msg()
{
   printf("\nI like C language");
}
