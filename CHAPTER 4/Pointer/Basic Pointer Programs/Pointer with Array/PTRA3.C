/*
    Write a program to enter and display array element using pointer where user
    enter n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
     int a[5],i,n;
     int *p;
     //clrscr();
     printf("Enter the size of the array");
     scanf("%d",&n);
     p=a;// or p=&a[0];
     printf("\nEnter the array elements");
     for(i=0;i<n;i++)
     {
		scanf("%d",p);
		p++;
     }
     p=a;
     printf("\nArray elements array");
     for(i=0;i<n;i++)
     {
		printf("\n%d",*p);
		p++;
     }
     getch();
}
