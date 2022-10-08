/*
    Write a program to create string using pointer where string entered by user.
*/
#include<stdio.h>
#include<conio.h>
main()
{
   char *a;
   //clrscr();
   printf("Enter the string");
   scanf("%s",&a);
   printf("String is=%s",*a);
   printf("Size of char=%d",sizeof(char));
   printf("Size of char=%d",sizeof(a));
   getch();
}
