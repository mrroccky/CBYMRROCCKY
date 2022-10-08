/*
    Write a program to convert lower entered string into upper string.
		      OR
    Write a program to demonstrate strupr function.

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char a[50];
//    clrscr();
    printf("Enter the String in lower case\n");
    scanf("%s",&a);
    printf("Upper case string is=%s",strupr(a));
    getch();
}
