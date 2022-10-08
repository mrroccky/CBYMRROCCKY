/*
    Write a program to print following pattern where user enter the n.
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
     int i,j,n;
     clrscr();
     printf("Enter the no.");
     scanf("%d",&n);
     for(i=n;i>=1;i--)
     {
	for(j=1;j<=i;j++)
	{
	   printf("%d",i);
	}
	printf("\n");
     }
     getch();
}