/*
    Write a program to check whether entered year is leap or not.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int year;
     //clrscr();
     printf("Enter the year");
     scanf("%d",&year);
     if(year%4==0)
     {
	printf("Enter year is leap");
     }
     else
     {
	printf("Enter year is not leap");
     }
     getch();
}
