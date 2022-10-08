/*
     Write a program to demonstrate goto statement.
*/
#include<stdio.h>
#include<conio.h>
main()
{
   int i=1;
   //clrscr();
   a:
   if(i<=3)
   {
       printf("\n%d",i);
       i++;
       goto a;
   }
   else
   {
      printf("\nExit From Program");
   }
   getch();
}
