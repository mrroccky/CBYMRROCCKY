/*
    Write a program to add array element using pointer where user
    enter n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int a[50],i,n,sum=0;
     int *p;
     clrscr();
     printf("Enter the size of the array\n");
     scanf("%d",&n);
     p=&a[1];
     printf("\nEnter the array elements\n");
     for(i=1;i<=n;i++)
     {
	scanf("%d",(p+i));
     }
     clrscr();
     for(i=1;i<=n;i++)
     {
	 sum=sum+*(p+i);
     }
     printf("\nSum of array elements is=%d",sum);
     getch();
}