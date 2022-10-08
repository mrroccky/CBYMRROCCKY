/*
     Write a program to demonstrate break statement in for loop.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
     int i;
     //clrscr();
     for(i=1;i<=10;i++)
     {
		if(i==5)
		{
		    break;
		}
		else
		{
		   printf("\n%d",i);
	    }
	}
    getch();
}
