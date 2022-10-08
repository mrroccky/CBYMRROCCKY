/*
    Write a program to print following pattern where user enter n.
    *****
    ****
    ***
    **
    *
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,n;
     clrscr();
     printf("Enter the no.");
     scanf("%d",&n);
     for(i=n;i>=1;i--)
     {
	for(j=1;j<=i;j++)
	{
	   printf("*");
	}
	printf("\n");
     }
     getch();
}