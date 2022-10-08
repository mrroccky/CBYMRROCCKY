/*
     Write a program to demonstrate continue statement in while loop.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int i=1;
     //clrscr();
     while(i<=10)
     {
		if(i==5)
		{
		   i++;
		   continue;
		}
		else
		{
		   printf("\n%d",i);
		}
		i++;
     }
     getch();
}
