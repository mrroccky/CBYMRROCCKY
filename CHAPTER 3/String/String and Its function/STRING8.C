/*
    Write a program to compare two string.
		      OR
    Write a program to demonstrate strcmp function.

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
     char a[50],b[50];
     int v;
     //clrscr();
     printf("Enter the 1 st String\n");
     scanf("%s",&a);
     printf("Enter the 2 st String\n");
     scanf("%s",&b);
     v=strcmp(a,b);
     if(v==0)
     {
	   printf("\nBoth string are equals");
     }
     else if(v>0)
     {
	printf("String1 is greater than String2");
     }
     else
     {
	 printf("\String1 is smaller than string 2");
     }
     getch();
}
