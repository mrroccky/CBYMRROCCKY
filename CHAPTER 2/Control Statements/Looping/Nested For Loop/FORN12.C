/*
    Write a program to print following pattern.
    55555
    4444
    333
    22
    1
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int i,j;
     clrscr();
     for(i=5;i>=1;i--)
     {
	for(j=1;j<=i;j++)
	{
	   printf("%d",i);
	}
	printf("\n");
     }
     getch();
}