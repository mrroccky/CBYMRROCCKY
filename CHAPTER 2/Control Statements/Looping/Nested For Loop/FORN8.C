/*
    Write a program to print following pattern.
    1
    24
    369
    481216
    510152025
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int i,j;
     clrscr();
     for(i=1;i<=5;i++)
     {
	for(j=1;j<=i;j++)
	{
	   printf("%d",i*j);
	}
	printf("\n");
     }
     getch();
}