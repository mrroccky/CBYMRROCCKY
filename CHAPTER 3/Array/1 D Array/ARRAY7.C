/*
   Write a program to enter and display element of array
   where user enter n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a[50];
    int i,n;
    //clrscr();
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("\nEnter the arrary elements\n");
       scanf("%d",&a[i]);
    }
   printf("\nEnter elemements are");
    for(i=0;i<n;i++)
    {
       printf("\n%d",a[i]);
    }
    getch();
}
