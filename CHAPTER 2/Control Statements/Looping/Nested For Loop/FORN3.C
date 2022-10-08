/*
    Write a program to print following pattern.
    1
    22
    333
    4444
    55555

*/
#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,n;
     clrscr();
     for(i=1;i<=n;i++)
     {
	for(j=1;j<=i;j++)
	{
	   printf("%d",i);
	}
	printf("\n");
     }
     getch();
}