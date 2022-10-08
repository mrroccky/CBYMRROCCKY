/*
     Write a program to demonstrate continue statement in for loop.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int i;
     //clrscr();
     for(i=1;i<=10;i++)
     {
	  if(i==5)
	  {
	    continue;
	  }
	 else
	 {
	    printf("\n%d",i);
	 }
     }
     getch();
}
