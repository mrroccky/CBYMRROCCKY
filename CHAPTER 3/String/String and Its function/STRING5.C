
/*
    Write a program to reverse enter of string.
		      OR
    Write a program to demonstrate strrev function.

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char a[50];
    //clrscr();
    printf("Enter the String\n");
    scanf("%s",&a);
    
    printf("Reverse of string is=%s",strrev(a));
    getch();
}
