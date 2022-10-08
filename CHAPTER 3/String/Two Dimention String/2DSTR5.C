/*
   Write a program to demonstrate to reverse of particular string
   where user enter  string position usinng two dimension string.
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
   char a[50][20];
   int i,n,pos;
   //clrscr();
   printf("Enter the number that how many strings do you want to enter");
   scanf("%d",&n);
   printf("Enter the strings\n");
   for(i=1;i<=n;i++)
   {
       scanf("%s",&a[i]);
   }
   printf("\nEntere strings position that you want to find length\n");
   scanf("%d",&pos);
   printf("Length of your entered position string is=%s",strrev(a[pos]));
   getch();
}
