/*
   Write a program to check whether entered year is leap or not using conditional
   operator.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int year,check;
    clrscr();
    printf("Enter the year");
    scanf("%d",&year);
    check=year%4==0;
    if(check==1)
    {
       printf("Year is Leap");
    }
    else
    {
       printf("Year is not leap");
    }
    getch();
}

