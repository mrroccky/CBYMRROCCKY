/*
    Write a program to print following pattern.
    12345
    1234
    12
    1
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,n;
     clrscr();
     for(i=n;i>=1;i--)
     {
	for(j=1;j<=i;j++)
	{
	   printf("%d",j);
	}
	printf("\n");
     }
     getch();
}