/*
   Write a program to find smallest number among array elements.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int a[50];
     int i,min,n;
     clrscr();
     printf("Enter the size of array");
     scanf("%d",&n);
     printf("\nEnter the arrary elements\n");
     for(i=1;i<=n;i++)
     {

	scanf("%d",&a[i]);
     }
     min=a[1];
     for(i=1;i<=n;i++)
     {
	if(a[i]<min)
	{
	   min=a[i];
	}
     }
     printf("Smallest Number Among Array elements is=%d",min);
     getch();
}
