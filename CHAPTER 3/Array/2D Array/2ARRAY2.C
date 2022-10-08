/*
   Write a program to demonstrate intialization of 2D array
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[2][2]={{1,2},{3,4}};
    int i,j;
   // clrscr();
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
	   printf("\n%d is stored at a[%d][%d]",a[i][j],i,j);
       }
    }
    getch();
}
