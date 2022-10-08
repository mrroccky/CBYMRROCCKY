/*
    Write a to demonstrate declare two dimesion string
    and enter and display string using pointer
*/
#include<stdio.h>
#include<conio.h>
main()
{
     char *a[50];
     int i,n;
     clrscr();
     printf("Enter the n for number of string that you want enter");
     scanf("%d",&n);
     printf("Enter the strings\n");
     for(i=0;i<n;i++)
     {
	scanf("%s",a[i]);
     }
     for(i=0;i<n;i++)
     {
	printf("\n%s",a[i]);
     }
     getch();
}
