/*
    Write a program to create "abc.txt" file.
*/
#include<stdio.h>
#include<conio.h>
main()
{
   FILE *p;
   //clrscr();
   p=fopen("abc.txt","w");
   getch();
}
