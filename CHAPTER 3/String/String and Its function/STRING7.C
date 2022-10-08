/*
    Write a program to convert lower entered string into upper string.
		      OR
    Write a program to demonstrate strlwr function.

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char a[50];
    //clrscr();
    printf("Enter the String in upper case\n");
    scanf("%s",&a);
    printf("Lower case string is=%s",strlwr(a));
    getch();
}
