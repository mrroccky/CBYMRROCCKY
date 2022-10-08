/*
    Write a program to copying string into another.
		      OR
    Write a program to demonstrate strcpy function.

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
     char a[50],b[50];
     //clrscr();
     printf("Enter the String\n");
     scanf("%s",&a);
     strcpy(b,a);
     printf("Copying string is=%s",b);
     getch();
}
