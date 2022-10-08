/*
   Write a program to demonstrate inialization of two dimension string.
*/
#include<stdio.h>
#include<conio.h>
main()
{
   char a[4][20]={"Chetan","Mukesh","Pravin","Komal"};
   int i;
   //clrscr();
   for(i=0;i<4;i++)
   {
      printf("\n%s",a[i]);
   }
   getch();
}
