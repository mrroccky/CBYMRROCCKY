/*
    Write a program to concat two string.
		      OR
    Write a program to demonstrate strcat function.

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
     static char a[50],b[50],c[40];
     int v;
     //clrscr();
     printf("Enter the 1st String\n");
     scanf("%s",&a);
     printf("\nEnter the 2st String\n");
     scanf("%s",&b);
     strcat(c,a);
     strcat(c,b);
     printf("Concat string is=%s",c);
     getch();
}
