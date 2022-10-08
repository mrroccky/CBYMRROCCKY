/*
    Write a program to print following pattern.
    2
    24
    246
    2468
    246810
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int i,j,n;
     clrscr();
     printf("Enter the no.");
     scanf("%d",&n);
     for(i=1;i<=5;i++)
     {
	for(j=1;j<=i;j++)
	{
	   printf("%d",n*j);
	}
	printf("\n");
     }
     getch();
}