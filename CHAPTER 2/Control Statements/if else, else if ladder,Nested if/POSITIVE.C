/*
    Write a program to check whether entered number is positive or negative.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int no;
     //clrscr();
     printf("Enter the number");
     scanf("%d",&no);
     if(no>0)
     {
	printf("Enter no. is postive");
     }
     else
     {
	printf("Enter no. is Negative");
     }
     getch();
}
