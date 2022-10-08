/*
    Write a program to find greatest number between two numbers.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int a,b;
     //clrscr();
     printf("Enter the two numbers");
     scanf("%d%d",&a,&b);
     if(a>b)
     {
	printf("a is greatest");
     }
     else
     {
	printf("b is greatest");
     }
     getch();
}

