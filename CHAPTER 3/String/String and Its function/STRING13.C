/*
    Write a program to demonstrate strncmpi function.

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
     char a[50],b[50];
     //clrscr();
     printf("Enter the 1 st String\n");
     scanf("%s",&a);
     printf("Enter the 2 st String\n");
     scanf("%s",&b);
     strncmpi(a,b,3);

     if(strncmpi==0)
     {
	printf("\nBoth string are equals");
     }
     else
     {
	printf("String is not match");
     }
     getch();
}
