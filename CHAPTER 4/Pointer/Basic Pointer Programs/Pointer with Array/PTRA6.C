/*
    Write a program to enter and display array elements using pointer where user
    enter n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int a[50],i,n;
     int *p;
     clrscr();
     printf("Enter the size of the array");
     scanf("%d",&n);
     p=a;
     printf("\nEnter the array elements");
     for(i=1;i<=n;i++)
     {
	scanf("%d",(p+i));
     }
     printf("\nArray elements array");
     for(i=1;i<=n;i++)
     {
	printf("\n%d",*(p+i));
     }
    getch();
}
