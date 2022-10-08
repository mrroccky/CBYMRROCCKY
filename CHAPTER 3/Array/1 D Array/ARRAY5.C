/*
   Write a program to demonstrate declaration of 1D array.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[50];
    //clrscr();
    printf("\nEnter the numbers\n");
    scanf("%d",&a[0]);
    printf("\nEnter the numbers\n");
    scanf("%d",&a[1]);
    printf("\nEnter the numbers\n");
    scanf("%d",&a[2]);
    printf("\nEnter the numbers\n");
    scanf("%d",&a[3]);
    printf("\nEnter the numbers\n");
    scanf("%d",&a[4]);
    printf("\nEnter the numbers\n");
    scanf("%d",&a[5]);

    printf("\na[%d]=%d",0,a[0]);
    printf("\na[%d]=%d",1,a[1]);
    printf("\na[%d]=%d",2,a[2]);
    printf("\na[%d]=%d",3,a[3]);
    printf("\na[%d]=%d",4,a[4]);
    printf("\na[%d]=%d",5,a[5]);

    getch();
}
