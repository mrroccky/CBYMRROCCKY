/*
   Write a program to demonstrate to enter 5 strings in two dimension string.
*/
#include<stdio.h>
#include<conio.h>
main()
{
   char a[4][20];
   int i;
   //clrscr();
   printf("Enter the strings\n");
   for(i=0;i<5;i++)
   {
       scanf("%s",&a[i]);
   }
   printf("\nEntered strings are=\n");
   printf("\n---------------------------------");

   for(i=0;i<5;i++)
   {
      printf("\n%s",a[i]);
   }
   getch();
}
