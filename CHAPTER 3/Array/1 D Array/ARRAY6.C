/*
   Write a program to enter and display 5 element in array.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[50];
    int i;
    //clrscr();
    for(i=1;i<=5;i++)
    {
       printf("\nEnter the arrary elements\n");
       scanf("%d",&a[i]);
    }
    printf("\nEnter elemements are");
    for(i=1;i<=5;i++)
    {
       printf("\n%d",a[i]);
    }
    getch();
}
