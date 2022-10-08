/*
    Write a program to find length of string.
		      OR
    Write a program to demonstrate strlen function.

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char a[50];
    int len;
    //clrscr();
    printf("Enter the String\n");
    scanf("%s",&a);
    len=strlen(a);
    printf("Length of string is=%d",len);
   /*            OR*/
    printf("\nLength of string is=%d",strlen(a));
    getch();
}
