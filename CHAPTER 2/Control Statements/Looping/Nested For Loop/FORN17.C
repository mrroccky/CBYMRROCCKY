/*
    Write a program to print following pattern.

	  *
	 * *
	* * *
       * * * *
      * * * * *

*/
#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,k=0,len=5;
     clrscr();
     for(i=1;i<=5;i++)
     {
	for(j=1;j<=i;j++)
	{
	   for( ;k<=len;k++)
	   {
	      printf(" ");
	   }
	   printf(" *");
	}
	printf("\n");
	k=0;
	len--;
     }
     getch();
}