/*
   Write a program to find greatest number among array elements.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     long long int a[50];
     long long int i,max,n;
     //clrscr();
     printf("Enter the size of array");
     scanf("%d",&n);
     printf("\nEnter the arrary elements\n");
     for(i=1;i<=n;i++)
     {
	    scanf("%lld",&a[i]);
     }
     max=a[1];
     for(i=1;i<=n;i++)
     {
		if(a[i]>max)
		{
		   max=a[i];
		}
	}
     printf("Greatest Number Among Array elements is=%lld",max);
     getch();
}
