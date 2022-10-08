/*
   Write a program to caluclate the following series.
   1+1/2!........1/n!. where user enter the n.
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,f=1;
    float s=0,t;
    //clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	   f=f*i;
       t=(float)1/f;
       s=s+t;
    }
    printf("Sum of series is=%f",s);
    getch();
}
