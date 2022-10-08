/*
    Write a program to demonstrate how to pass string to function.
			 OR
    Write a program to disply string using function with argument
    but no return value.
*/
#include<stdio.h>
#include<conio.h>
void string1(char[]);
void string2(char[]);
void string3(char*);
main()
{
   char a[]={"Chetan"};
   //clrscr();
   string1(a);
   string2(a);
   string3(a);
   getch();
}
void string1(char a[])
{
    printf("\nString is displaying from funtion string1");
    printf("\nAnd string is=%s",a);
}
void string2(char a[50])
{
    printf("\n\n---------------------------------------------");
    printf("\n\nString is displaying from funtion string2");
    printf("\nAnd string is=%s",a);
}
void string3(char *a)
{
    printf("\n\n---------------------------------------------");
    printf("\nString is displaying from funtion string3");
    printf("\nAnd string is=%s",a);
}
