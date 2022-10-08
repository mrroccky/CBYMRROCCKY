/*
    Write a program to enter string and display it.
		      OR
    Write a program to demonstrate get function.

*/
#include<stdio.h>
#include<conio.h>
main()
{
    char a[50];
    //clrscr();
    printf("Enter the String\n");
    gets(a);
    printf("Enter string is=%s",a);
    getch();
}
