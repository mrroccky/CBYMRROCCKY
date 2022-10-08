/*
   Write a program to count leap year from 2000 to 2099.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int year,yearc=0;
    //clrscr();
    for(year=2000;year<=2020;year++)
    {
       if(year%4==0)
       {
	  yearc++;
       }
    }
    printf("Number of leap year from 2000 to 2099 are=%d",yearc);

    getch();
}
