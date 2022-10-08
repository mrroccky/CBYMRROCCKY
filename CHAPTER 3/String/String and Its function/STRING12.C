/*
    Write a program to compare two string and ignore case.
		      OR
    Write a program to demonstrate strcmpi function.

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
     char a[50],b[50];
     int v;
     //clrscr();
     printf("Enter the 1 st String\n");
     scanf("%s",&a);
     printf("Enter the 2 st String\n");
     scanf("%s",&b);
     v=strcmpi(a,b);

     if(v==0)
     {
	printf("\nBoth string are equals");
     }
     else
     {
	printf("String is not match");
     }
     getch();
}
