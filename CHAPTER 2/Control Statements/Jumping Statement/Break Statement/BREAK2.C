/*
     Write a program to demonstrate break statement in while loop.
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
	   break;
	}
	else
	{
	   printf("\n%d",i);
	}
	//i++;
     }
     getch();
}
