/*
   Write a program to demonstrate intialization of 2D array
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[2][2]={{1,2},{3,4}};
    //clrscr();
    printf("%d is stored at a[%d][%d]",a[0][0],0,1);
    printf("\n%d is stored at a[%d][%d]",a[0][1],0,1);
    printf("\n%d is stored at a[%d][%d]",a[1][0],1,0);
    printf("\n%d is stored at a[%d][%d]",a[1][1],1,1);
    getch();
}



