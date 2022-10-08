/*
    Write a program to demonstrate strncpy function.

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
     static char a[50],b[50];
     int v;
     //clrscr();
     printf("Enter the String\n");
     scanf("%s",&a);
     strncpy(b,a,3);
     printf("Copying string is=%s",b);
     getch();
}
