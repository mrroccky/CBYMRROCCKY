/*
   Write a program to demonstrate to enter 5 strings in two dimension string.
*/
#include<stdio.h>
#include<conio.h>
main()
{
   char a[50][20];
   int i,n;
   //clrscr();
   printf("Enter the number that how many strings do you want to eneter");
   scanf("%d",&n);
   printf("Enter the strings\n");
   for(i=0;i<n;i++)
   {
       scanf("%s",&a[i]);
   }
   printf("\nEntered strings are=\n");
   printf("\n---------------------------------");

   for(i=0;i<n;i++)
   {
      printf("\n%s",a[i]);
   }
   getch();
}
