/*
    Write a program to print following pattern where user enter the n.
    12345
    1234
    123
    12
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
	   printf("%d",j);
	}
	printf("\n");
     }
     getch();
}