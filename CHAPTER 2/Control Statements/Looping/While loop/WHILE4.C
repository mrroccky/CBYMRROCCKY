/*
     Write a program to check wheather enter number is Amstrong or not.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,org,d,cube,sum=0;
    //clrscr();
    printf("Enter the no.");
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
       d=n%10;
       cube=d*d*d;
       sum=sum+cube;
       n=n/10;
    }
    if(sum==org)
    {
	printf("Entered no is Amstrong");
    }
    else
    {
       printf("Entered no is not Amstrong");
    }
    getch();
}
