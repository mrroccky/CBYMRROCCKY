/*
    Write a program to print following pattern where usre enter.

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
     int i,j,k=0,len,n;
     clrscr();
     printf("Enter the no.");
     scanf("%d",&n);
     len=n;
     clrscr();
     for(i=1;i<=n;i++)
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